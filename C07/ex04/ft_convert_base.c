/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:13:27 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/27 17:31:57 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

long	ft_get_digits_count(int nb);

int		ft_is_whitespace(char c);

int		ft_strlen(char *str);

int		ft_validate(char *base);

int		ft_found(char c, char *base, int return_index);

int	ft_atoi_mod(char *str, char *base, int base_len)
{
	int	negative;
	int	res;

	negative = 1;
	res = 0;
	while (*str)
	{
		if (*str != '+' && ft_is_whitespace(*str) == 0)
		{
			if (ft_is_whitespace(*(str + 1)))
				break ;
			if (*str == '-' && ft_found(*(str - 1), base, 0) == 0)
				negative *= -1;
			else if (ft_found(*str, base, 0))
			{
				res *= base_len;
				res += ft_found(*str, base, 1);
			}
			else
				break ;
		}
		str++;
	}
	return (res * negative);
}

char	*ft_check_int(long *nbr, long (*n)[2], char *base, long *digits)
{
	char	*str;
	long	base_len;
	int		i;

	i = 0;
	base_len = ft_strlen(base);
	str = (char *) malloc(sizeof(char) * (ft_get_digits_count(*nbr) * 4 + 1));
	(*n)[1] = 0;
	if (*nbr < 0)
	{
		*nbr *= -1;
		(*n)[1] = 1;
	}
	while (*nbr > 0)
	{
		(*n)[0] = *nbr % base_len;
		str[i] = base[(*n)[0]];
		*nbr /= base_len;
		i++;
	}
	if ((*n)[1])
		str[i] = '-';
	*digits = i;
	return (str);
}

char	*ft_itoa_mod(long nbr, char *base)
{
	char	*str;
	char	*str2;
	long	n[2];
	long	digits;
	long	i;

	str = ft_check_int(&nbr, &n, base, &digits);
	str2 = (char *) malloc(sizeof(char) * (ft_get_digits_count(nbr) * 4 + 1));
	i = 0;
	while (i < digits + 1)
	{
		if (n[1] == 0)
			str2[i] = str[digits - i - 1];
		else
			str2[i] = str[digits - i];
		i++;
	}
	free(str);
	str2[i] = '\0';
	return (str2);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	base_from_len;
	int	base_from_convertion;

	if (base_from == NULL || base_to == NULL || nbr == NULL)
		return (0);
	if (ft_validate(base_to) == 0 && ft_validate(base_from) == 0)
		return (0);
	base_from_len = ft_strlen(base_from);
	base_from_convertion = ft_atoi_mod(nbr, base_from, base_from_len);
	return (ft_itoa_mod(base_from_convertion, base_to));
}

/* int	main(void)
{
	char	hex[] = "0123456789ABCDEF";
	char	dec[] = "0123456789";
	char	bin[] = "01";
	char	oct[] = "01234567";
	char	joel[] = "joel";
	
	printf("7FFFFFFF:%s\n", ft_convert_base("17777777777", NULL, hex));
	printf("7FFFFFFF:%s\n", ft_convert_base("17777777777", oct, hex));
	printf("-20000000000:%s\n", ft_convert_base("-80000000", hex, oct));
	printf("-2147483648:%s\n", ft_convert_base("-80000000", hex, dec));
	printf("2147483647:%s\n", ft_convert_base("--7FFFFFFF-", hex, dec));
	printf("11110000001:%s\n", ft_convert_base("781", hex, bin));
	printf("1CA:%s\n", ft_convert_base("111001010", bin, hex));
	printf("16112:%s\n", ft_convert_base("11100010010105465648978954", bin, oct));
	printf("23521:%s\n", ft_convert_base("55741", oct, dec));
	printf("ooj:%s\n", ft_convert_base("24", oct, joel));
	printf("568746:%s\n", ft_convert_base("568746", dec, dec));
	//free(result);
	return (0);
} */
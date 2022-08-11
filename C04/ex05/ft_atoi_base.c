/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:27:43 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/23 12:30:30 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_validate(char *base, int *base_int)
{
	int	i;
	int	j;

	i = 0;
	*base_int = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| ft_is_whitespace(base[i]))
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j + 1] && i != j + 1)
				return (0);
			j++;
		}
		i++;
		*base_int += 1;
	}
	if (*base_int <= 1)
		return (0);
	return (1);
}

int	ft_found(char c, char *base, int return_index)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			if (return_index)
				return (i);
			else
				return (1);
		}
		i++;
	}
	return (0);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;

	if (ft_validate(base, &base_len) == 0)
		return (0);
	return (ft_atoi_mod(str, base, base_len));
}

int	main(void)
{
	char	str[] = " ooj";
	char	base[] = "joel";
	
	printf("%d\n", ft_atoi_base(str, base));
	printf("42:%d\n", ft_atoi_base("2a-", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}

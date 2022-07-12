/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:35:26 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/12 16:04:19 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
	{
		len++;
	}
	return (len);
}

char	*ft_dec_to_hex(int dec)
{
	int		i;
	int		res;
	int		mod;
	char	hex[100];
	char	*phex;

	i = 0;
	res = dec;
	phex = hex;
	while (res != 0)
	{
		mod = res % 16;
		if (mod < 10)
		{
			hex[i] = 48 + mod;
		}
		else
		{
			hex[i] = 87 + mod;
		}
		res = res / 16;
		i++;
	}
	return (phex);
}

void	ft_check_char(char c)
{
	char	hex[100];
	int		i;

	i = 0;
	if (c < 32)
	{
		write(1, "\\", 1);
		ft_strcpy(hex, ft_dec_to_hex(c));
		if (ft_strlen(hex) == 1)
		{
			write(1, "0", 1);
		}
		while (i < ft_strlen(hex))
		{
			c = hex[ft_strlen(hex) - 1 - i];
			write(1, &c, 1);
			i++;
		}
	}
	else
	{
		write(1, &c, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_check_char(str[i]);
		i++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}*/
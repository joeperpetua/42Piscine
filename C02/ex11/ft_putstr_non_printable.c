/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:37:30 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/21 12:03:25 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
/*#include <unistd.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(int nbr, char *base)
{
	if (nbr == 0)
		return ;
	ft_convert(nbr / 16, "0123456789abcdef");
	ft_putchar(base[nbr % 16]);
}

void	ft_check_char(unsigned char c)
{
	int	dec;

	dec = 0;
	if (c < 32 || c > 126)
	{
		write(1, "\\", 1);
		if (c < 16)
			write(1, "0", 1);
		dec = c + '0';
		ft_convert(dec - 48, "0123456789abcdef");
	}
	else
		write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_check_char((unsigned char)str[i]);
		i++;
	}
}

/*int	main(void)
{
	char	a[] = "Coucou\ntu vas bien ?";
	char	b[] = "\n\a\b\\s";
	char	c[] = {203, 6, 123, 20, 31, 32, 33, 125, 126, 127, 0};

	ft_putstr_non_printable(a);
	ft_putchar('\n');
	ft_putstr_non_printable(b);
	ft_putchar('\n');
	ft_putstr_non_printable(c);
	ft_putchar('\n');
	return (0);
}*/

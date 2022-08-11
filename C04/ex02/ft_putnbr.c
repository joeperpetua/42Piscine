/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:05:21 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/16 17:08:14 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(int nb)
{
	char	character;

	if (nb == 0)
		return ;
	character = (nb % 10) + '0';
	ft_convert(nb / 10);
	ft_putchar(character);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar(nb + '0');
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_convert(nb);
	}
	else
		ft_convert(nb);
}

/*int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	return (0);
}*/

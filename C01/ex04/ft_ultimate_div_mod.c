/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:50:37 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/10 15:59:59 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(int nb)
{
	char	character;

	if (nb == 0)
	{
		return ;
	}
	character = (nb % 10) + '0';
	ft_convert(nb / 10);
	ft_putchar(character);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_convert(nb);
	}
}

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 42;
	b = 10;
	pa = &a;
	pb = &b;
	ft_ultimate_div_mod(pa, pb);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}*/

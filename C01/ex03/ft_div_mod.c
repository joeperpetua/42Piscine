/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:19:27 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/10 15:34:09 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* void	ft_putchar(char c)
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
	int	div_mod[2];
	int	*div;
	int	*mod;

	a = 100;
	b = 10;
	div = &div_mod[0];
	mod = &div_mod[1];
	ft_div_mod(a, b, div, mod);
	ft_putnbr(div_mod[0]);
	ft_putchar('\n');
	ft_putnbr(div_mod[1]);
	return (0);
}*/

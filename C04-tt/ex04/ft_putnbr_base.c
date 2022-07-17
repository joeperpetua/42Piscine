/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:18:50 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/17 16:50:42 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_validate(char *base, unsigned int *base_int)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_convert(unsigned int nbr, char *base, unsigned int base_int)
{
	if (nbr == 0)
		return ;
	ft_convert(nbr / base_int, base, base_int);
	ft_putchar(base[nbr % base_int]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_int;
	unsigned int	nbr_converted;

	base_int = 0;
	if (ft_validate(base, &base_int) == 0)
		return ;
	if (nbr == 0)
		ft_putchar(base[0]);
	else if (nbr == -2147483648)
	{
		write(1, "-", 1);
		nbr_converted = (unsigned int) nbr;
		ft_convert(nbr_converted, base, base_int);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	nbr_converted = (unsigned int) nbr;
	ft_convert(nbr_converted, base, base_int);
}

int	main(void)
{
	ft_putnbr_base(90234, "0123456789ABCDEF");
	ft_putchar('\n');
	return (0);
}

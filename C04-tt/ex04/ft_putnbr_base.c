/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:18:50 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/16 21:31:13 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_validate(char *base, int *base_int)
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

void	ft_convert(int nbr, char *base, int base_int)
{
	if (nbr == 0)
		return ;
	ft_convert(nbr / base_int, base, base_int);
	ft_putchar(base[nbr % base_int]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_int;

	base_int = 0;
	if (ft_validate(base, &base_int) == 0)
		return ;
	if (nbr == 0)
		putchar(base[0]);
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
		ft_convert(nbr, base, base_int);
	}
	else
		ft_convert(nbr, base, base_int);
}

/*int	main(void)
{
	ft_putnbr_base(100, "0123456789ABCDEF");
	ft_putchar('\n');
	return (0);
}*/

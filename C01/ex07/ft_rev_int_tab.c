/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:34:25 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/10 18:28:54 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
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
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp_first;
	int	temp_last;

	i = 0;
	temp_first = 0;
	temp_last = 0;
	while (i < (size / 2))
	{
		if (i == 0)
		{
			temp_last = *(tab + (size - 1));
			temp_first = *(tab + i);
			*(tab + i) = temp_last;
			*(tab + (size - 1)) = temp_first;
		}
		else
		{
			temp_last = *(tab + (size - (i + 1)));
			temp_first = *(tab + i);
			*(tab + i) = temp_last;
			*(tab + (size - (i + 1))) = temp_first;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[7] = {0, 2, 4, 6, 8, 10, 12};
	int	size;
	int	i;

	i = 0;
	size = 7;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		ft_putnbr(*(tab + i));
		i++;
	}
	ft_putchar('\n');
	return (0);
}*/

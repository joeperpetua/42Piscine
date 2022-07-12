/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:31:29 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/10 19:42:32 by jperpetu         ###   ########.fr       */
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
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_convert(nb);
	}
	else
	{
		ft_convert(nb);
	}
}*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size -1)
		{
			if (*(tab + j) > *(tab + (j + 1)))
			{
				ft_swap((tab + j), (tab + (j + 1)));
			}
			j++;
		}
		j = 0;
		i++;
	}
}

/*int	main(void)
{
	int	tab[13] = {7, 3, 8, 4, -43, 5, 9, 1, 34, 23, 2234, -2348, 44};
	int	size;
	int	i;

	i = 0;
	size = 13;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		ft_putnbr(*(tab + i));
		write(1, ", ", 2);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/

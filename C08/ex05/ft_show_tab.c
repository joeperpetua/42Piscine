/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:18:55 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/28 10:59:17 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdlib.h>*/
#include "ft_stock_str.h"

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

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = ' ';
	while (*(str + i))
	{
		c = *(str + i);
		write(1, &c, 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

/* int	main(int argc, char **argv)
{
	t_stock_str	*str_stock;

	str_stock = (t_stock_str *) malloc(sizeof(t_stock_str) * 999);
	if (argc == 1)
		return (0);
	
	str_stock = ft_strs_to_tab(argc, argv);
	ft_show_tab(str_stock);
	return (0);
} */

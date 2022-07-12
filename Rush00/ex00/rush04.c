/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:00:58 by dguillot          #+#    #+#             */
/*   Updated: 2022/07/10 13:39:49 by dguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_print_corner(int act_x, int act_y, int x, int y)
{
	if (act_x == 0 && act_y == 0)
	{
		ft_putchar('A');
	}
	else if (x != 1 && y != 1 && act_x + 1 == x && act_y + 1 == y)
	{
		ft_putchar('A');
	}
	else if (act_x + 1 == x && act_y == 0)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('C');
	}
}

void	ft_check_corner(int act_x, int act_y, int x, int y)
{
	if (act_y == 0 || act_y + 1 == y)
	{
		if (act_x == 0 || act_x + 1 == x)
		{
			ft_print_corner(act_x, act_y, x, y);
		}
		else
		{
			ft_putchar('B');
		}
	}
	else if (act_x == 0 || act_x + 1 == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_line(int act_y, int x, int y)
{
	int	act_x;

	act_x = 0;
	while (act_x < x)
	{
		ft_check_corner(act_x, act_y, x, y);
		act_x ++;
	}
}

void	rush(int x, int y)
{
	int	act_y;

	act_y = 0;
	while (act_y < y)
	{
		ft_print_line(act_y, x, y);
		ft_putchar('\n');
		act_y ++;
	}	
}

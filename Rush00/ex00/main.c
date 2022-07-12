/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:00:11 by dguillot          #+#    #+#             */
/*   Updated: 2022/07/10 14:04:49 by dguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_print_corner(int act_x, int act_y, int x, int y);

void	ft_print_line(int act_y, int x, int y);

void	rush00(int x, int y);

void	rush01(int x, int y);

void	rush02(int x, int y);

void	rush03(int x, int y);

void	rush(int x, int y);

int	main(void)
{
	rush(-10, -14);
	return (0);
}

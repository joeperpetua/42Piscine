/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 21:09:22 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/10 12:02:13 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_combn(int n, int i)
{
	if (i > n)
	{
		return ;
	}
	i++;
	ft_combn(n - 1, i);
	ft_putchar(i + '0');
}

void	ft_print_combn(int n)
{
	if (n < 0 || n > 10)
	{
		return ;
	}
	ft_combn(n, 0);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}

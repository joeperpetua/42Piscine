/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:43:00 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/10 14:55:28 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 100;
	pa = &a;
	b = 101;
	pb = &b;
	ft_swap(pa, pb);
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}*/

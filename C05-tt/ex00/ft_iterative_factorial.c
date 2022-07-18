/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:08:07 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/18 17:30:32 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	res = nb;
	while (nb > 0)
	{
		if (nb == 1)
			res *= nb;
		else
			res *= nb - 1;
		nb--;
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
}

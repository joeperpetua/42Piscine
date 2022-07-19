/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:16:42 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/19 15:38:22 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	i = -90;
	int	res;
	int	count = 0;
	
	while (i < 1000)
	{
		res = ft_is_prime(i);
		if (res)
		{
			count++;
			printf("%dth Prime number found: %d\n", count, i);
		}
		i++;
	}
	
}*/

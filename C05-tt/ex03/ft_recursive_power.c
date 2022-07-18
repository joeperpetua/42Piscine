/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:59:01 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/18 19:15:16 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_get_pow(int nb, int power, int *res)
{
	if (power == 1)
		return ;
	*res = *res * nb;
	ft_get_pow(nb, power - 1, res);
}

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	ft_get_pow(nb, power, &res);
	return (res);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(-42, 2));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:10:11 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/18 18:45:58 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_get_fact(int nb, int *res)
{
	if (nb == 1)
		return ;
	*res = *res * (nb - 1);
	ft_get_fact(nb - 1, res);
}

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (res);
	else if (nb < 0)
		return (0);
	res = nb;
	ft_get_fact(nb, &res);
	return (res);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(4));
}*/

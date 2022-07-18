/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:17:03 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/18 19:39:52 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	get_fibo(int *n, int index)
{
	if (index <= 2)
		return ;
	n[0] = n[1];
	n[1] = n[2];
	n[2] = n[0] + n[1];
	get_fibo(n, index - 1);
}

int	ft_fibonacci(int index)
{
	int	n[3];

	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	n[0] = 0;
	n[1] = 1;
	n[2] = n[0] + n[1];
	get_fibo(n, index);
	return (n[2]);
}

/*int	main(void)
{
	printf("%d\n", ft_fibonacci(10));
	return (0);
}*/

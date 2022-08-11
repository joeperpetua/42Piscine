/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:16:42 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/23 16:02:25 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <time.h>*/	

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
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
	clock_t start_clk = clock();
	printf("Prime number found: %d\n", ft_is_prime(2147483647));
	printf("Processor time used by program: %Lg sec.\n", \
    (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
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
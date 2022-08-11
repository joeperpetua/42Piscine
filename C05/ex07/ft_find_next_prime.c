/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:39:19 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/23 16:07:44 by jperpetu         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}

/*int	main(void)
{
	clock_t start_clk = clock();
	printf("Prime number found: %d\n", ft_find_next_prime(2147483645));
	printf("Processor time used by program: %Lg sec.\n", \
    (clock() - start_clk) / (long double) CLOCKS_PER_SEC);
	return (0);
}*/

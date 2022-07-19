/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:53:11 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/19 15:13:32 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i < nb)
	{
		if (i == 46340)
			return (0);
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	i = 0;

	while (i < 2147483647)
	{
		if (ft_sqrt(i))
			printf("sqrt of %d = %d\n", i, ft_sqrt(i));
		i++;
	}
}*/

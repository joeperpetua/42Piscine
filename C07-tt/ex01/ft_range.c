/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:01:38 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/20 12:34:31 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 1;
	size = max - min - 1;
	array = malloc(sizeof(int) * size);
	while (i <= size)
	{
		array[i - 1] = min + i;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	i = 0;
	int	min = 0;
	int	max = 10;
	int	*range = ft_range(min, max);

	while (i < max - min - 1)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/

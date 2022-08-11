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

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	array = malloc(sizeof(int) * size);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	i = 0;
	int	min = -3;
	int	max = 5;
	int	*range = ft_range(min, max);

	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/

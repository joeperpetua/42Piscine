/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:42:30 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/20 13:16:56 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/*int	main(void)
{
	int	i = 0;
	int	min = 7;
	int	max = 20;
	int	*range;
	int	size;

	size = ft_ultimate_range(&range, min, max);
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/

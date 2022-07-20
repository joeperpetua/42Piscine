/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:11:30 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/20 18:11:33 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_validate(char *base, unsigned int *base_int)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j + 1] && i != j + 1)
				return (0);
			j++;
		}
		i++;
		*base_int += 1;
	}
	if (*base_int <= 1)
		return (0);
	return (1);
}

int	ft_found(char c, char *base, int return_index)
{
	int	i;
	
	i = 0;
	while (base[i])
	{
		//printf("Comparing: %c | %c\n", c, base[i]);
		if (c == base[i])
		{
			//printf("Match, returning: %d\n", 1);
			if (return_index)
				return (i);
			else
				return (1);			
		}
		i++;
	}
	return (0);
}

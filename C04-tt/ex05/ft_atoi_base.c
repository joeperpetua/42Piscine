/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:57:34 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/17 17:20:55 by jperpetu         ###   ########.fr       */
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

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	base_int;
	
	base_int = 0;
	if (ft_validate(base, base_int) == 0)
		return (0);
	
}

int	main(void)
{
	int	res;

	res = ft_atoi_base("  ---+-89BA", "0123456789ABCDEF");
}

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

/*#include <stdio.h>*/

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

int	ft_get_last(char *str, char *base)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] != '-' && str[i] != '+' && str[i] != ' ' 
			&& (ft_found(str[i], base, 0) == 0 && str[i + 1] != '\0'))
		{
			//printf("Returning: %c (index %d)\n", str[i-1], i-1);
			return (i - 1);
		}
		if (str[i + 1] == '\0')
		{
			//printf("reached last char %c\n", str[i]);
			return (i);
		}
		i++;
	}
	return (0);
}

int	ft_check_char(char *str, char *base, int *quantity)
{
	int	i;
	int	first_num;

	i = 0;
	first_num = 0;
	while (i <= ft_get_last(str, base))
	{
		if (str[i] != '-' && str[i] != '+' && str[i] != ' ')
		{
			if (*quantity == 0 && str[i] != '0')
			{
				first_num = i;
				*quantity += 1;
			}
			else if (*quantity != 0)
				*quantity += 1;
		}
		i++;
	}
	return (first_num);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	base_int;
	int	quantity;
	int	first_num;
	int	i;
	int	multi;
	int	res[2];
	
	base_int = 0;
	if (ft_validate(base, &base_int) == 0)
		return (0);
	first_num = ft_check_char(str, base, &quantity);
	if (str[first_num] == '-' || str[first_num] == '+' || 
		str[first_num] == ' ')
		return (0);
	if (str[ft_get_last(str, base)] == '-' || str[ft_get_last(str, base)] 
		== '+' || str[ft_get_last(str, base)] == ' ')
		return (0);
	//printf("Index of first valid char: %d (%c)\n", first_num, str[first_num]);
	//printf("Index of last valid char: %d (%c)\n", ft_get_last(str, base), str[ft_get_last(str, base)]);
	res[0] = 0;
	while (first_num <= ft_get_last(str, base))
	{
		i = 0;
		res[0] = (ft_found(str[first_num], base, 1) * base_int;
		while (i < quantity - 1)
		{
			res[0] += res[0] * base_int;
			i++;
		}
		quantity--;
		first_num++;
	}
	
	
	return (1);
}

int	main(void)
{
	int	res;
	res = ft_atoi_base(" --+-ooj", "joel");
	return (res);
}

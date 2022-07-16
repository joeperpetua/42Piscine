/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:28:41 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/16 19:07:54 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_exp(int n, int exp)
{
	int	i;

	i = 0;
	while (i < exp)
	{
		n = n * 10;
		i++;
	}
	return (n);
}

void	ft_check_char(char *str, int *negative, int *quantity, int *first_num)
{
	int	i;

	i = 0;
	while (str[i] < 65)
	{
		if (str[i] == '-')
			*negative += 1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (*quantity == 0 && str[i] != '0')
			{
				*first_num = i;
				*quantity += 1;
			}
			else if (*quantity != 0)
				*quantity += 1;
		}
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	negative;
	int	quantity;
	int	first_num;
	int	multi;
	int	res;

	negative = 0;
	quantity = 0;
	first_num = 0;
	multi = 0;
	res = 0;
	ft_check_char(str, &negative, &quantity, &first_num);
	multi = ft_exp(1, quantity);
	while (multi > 1)
	{
		multi = multi / 10;
		if (multi < 10)
			res += (int)str[first_num] - 48;
		else
			res += ((int)str[first_num] - 48) * multi;
		first_num++;
	}
	if (negative % 2)
		res = res * -1;
	return (res);
}

/*int	main(void)
{
	int		res;
	char	str[] = " ---+--+1234ab567";

	res = ft_atoi(str);
	printf("Res: %d", res);
	return (0);
}*/

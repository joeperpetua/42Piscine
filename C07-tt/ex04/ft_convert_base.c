/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:13:27 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/20 18:13:29 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_validate(char *base, unsigned int *base_int);

int	ft_found(char c, char *base, int return_index);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	
}

int	main(void)
{
	char	nbr[] = " --+-89BAx";
	char	base_from[] = "0123456789ABCDEF";
	char	base_to[] = "0123456789";
	char	*result;
	
	result = ft_convert_base(nbr, base_from, base_to);
	printf("&s\n", result);
	free(result);
	return (0);
}

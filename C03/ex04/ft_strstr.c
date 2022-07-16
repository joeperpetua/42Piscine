/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:00:18 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/13 18:05:52 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
	{
		len++;
	}
	return (len);
}

int	ft_iterate(char *str, char *to_find, int str_length, int to_find_length)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= str_length - to_find_length)
	{
		j = 0;
		while (to_find[j])
		{
			if (str[j + i] == to_find[j])
				j++;
			else
			{
				j++;
				break ;
			}
			if (j == to_find_length)
				return (i);
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	to_find_length;
	int	str_length;
	int	found;

	to_find_length = ft_strlen(to_find);
	str_length = ft_strlen(str);
	found = ft_iterate(str, to_find, str_length, to_find_length);
	if (found)
		return (str + found);
	else
		return (0);
}

/*int	main(void)
{
	char	str[50] = "This is a short string";
	char	to_find[10] = "short";
	char	*res;

	res = ft_strstr(str, to_find);
	printf("%s", res);
}*/

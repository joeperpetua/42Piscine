/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:22:20 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/28 10:58:51 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*dup;
	int		i;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str_stock;

	i = 0;
	str_stock = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!str_stock)
		return (NULL);
	while (i < ac)
	{
		str_stock[i].str = av[i];
		str_stock[i].copy = ft_strdup(av[i]);
		str_stock[i].size = ft_strlen(av[i]);
		i++;
	}
	str_stock[i].str = 0;
	str_stock[i].copy = 0;
	str_stock[i].size = 0;
	return (str_stock);
}

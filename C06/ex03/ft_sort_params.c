/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:41:21 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/19 19:55:21 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_print_str_array(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_putstr(array[i + 1]);
		ft_putstr("\n");
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc == 1)
		return (0);
	while (i < argc - 1)
	{
		while (j < argc - 2)
		{
			if (ft_strcmp(argv[j + 1], argv[j + 2]) == 1)
			{
				ft_swap(&argv[j + 1], &argv[j + 2]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	ft_print_str_array(argv, argc);
	return (0);
}

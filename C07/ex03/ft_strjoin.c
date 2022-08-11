/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:05:00 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/27 14:20:39 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

void	ft_get_count(int *count, int *size, char **strs, char *sep)
{
	int	i;

	i = 0;
	*count = 0;
	while (i < *size)
	{
		*count += ft_strlen(strs[i]);
		if (i != *size - 1)
			*count += ft_strlen(sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*res;

	i = 0;
	if (size == 0)
	{
		res = (char *) malloc(1);
		res[0] = '\0';
		return (res);
	}
	ft_get_count(&count, &size, strs, sep);
	res = (char *) malloc(sizeof(char) * (count + 1));
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res[count] = '\0';
	return (res);
}

/* int main(int argc, char **argv)
{
	char	sep[] = "=====================";
	char	*res;

	if (argc == 1)
		return (0);
	res = ft_strjoin(argc, argv, sep);
	printf("%s\n", res);
	free(res);
	return (1);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:05:00 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/20 18:10:31 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
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
	int	src_len;
	int	dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	while (i < src_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
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
		*count += ft_strlen(sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*res;

	if (size == 0)
	{
		res = (char *) malloc(1);
		res[0] = '\0';
		return (res);
	}
	ft_get_count(&count, &size, strs, sep);
	i = 0;
	res = (char *) malloc(sizeof(char) * (count + 1));
	if (res)
	{
		while (i < size)
		{
			ft_strcat(res, strs[i]);
			if (i != size - 1)
				ft_strcat(res, sep);
			i++;
		}
		res[count] = '\0';
	}
	return (res);
}

/*int	main(int argc, char **argv)
{
	int		size = 4;
	char	sep[] = " <==> ";
	char	*res;

	if (argc == 1)
		return (0);
	res = ft_strjoin(size, argv, sep);
	printf("%s\n", res);
	free(res);
	return (1);
}*/

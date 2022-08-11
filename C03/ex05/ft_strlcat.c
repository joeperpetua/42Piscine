/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:13:54 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/21 16:59:13 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <bsd/string.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (size > 0)
		dest[dest_len + i] = '\0';
	if (size <= dest_len)
		return (src_len + size);
	else
		return (src_len + dest_len);
}

/*int	main(void)
{
	char	src[50] = "ThanMyself";
	char	dest[50] = "Shorter";
	char	dest2[50] = "Shorter";

	printf("returned length: %u\n", ft_strlcat(dest, src, 4));
	printf("Final String: \"%s\"\n\n", dest);
	printf("returned length: %lu\n", strlcat(dest2, src, 4));
	printf("Final String: \"%s\"\n", dest2);
	return (0);
}*/

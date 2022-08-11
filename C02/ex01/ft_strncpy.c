/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:04:24 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/13 11:15:26 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*(str + len))
		len++;
	return (len);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i < n)
	{
		if (src[i] && i < src_len)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int		main()
{
	char dest[] = "hola";
	char dest2[] = "hola";
	char src[] = "hola";

	printf("%s | %s \n", strncpy(dest, src, 3), ft_strncpy(dest2, src, 1));
	return (0);
}*/

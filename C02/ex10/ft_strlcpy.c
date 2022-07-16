/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:01:25 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/13 11:46:38 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*(str + len))
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

/*int	main(void)
{
	char	src[] = "test";
	char	dest[4] = "";
	unsigned int	len;

	len = ft_strlcpy(dest, src, 4);
	printf("src: \"%s\" | dest: \"%s\", %u\n", src, dest, len);
	return (0);
}*/

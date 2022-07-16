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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] && i < ft_strlen(src) - 1)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}

/*char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	int i;
	char dest[] = "Epic fail !!!!!";
	char src[] = "Success";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 15), dest);
	i = 9;
	while (i < 15)
	{
	if (dest[i] != '\0')
	{
		printf("FAIL! got %c (\\%x) at pos %d\n", dest[i], dest[i], i);
		return (1);
	}
		i++;
	}
	return (0);
}*/

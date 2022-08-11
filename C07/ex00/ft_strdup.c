/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:13:54 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/28 17:29:55 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include <stdlib.h>

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

/* int	main(void)
{
	char	original[] = "uXJz5gJvKippLIwXE61";
	char	*dup = ft_strdup(original);
	char	*og = strdup(original);

	printf("%s\n", dup);
	printf("%s\n", og);
	free(dup);
	return (0);
} */

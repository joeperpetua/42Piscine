/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:13:54 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/20 12:00:08 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		len;
	char	*dup;

	len = 0;
	while (str[len])
	{
		len++;
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return ('\0');
	dup = str;
	return (dup);
}

/*int	main(void)
{
	char	original[] = "Test String";
	char	*dup = ft_strdup(original);

	printf("%s\n", dup);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:28:48 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/28 12:15:26 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d\n", ft_strcmp("Strings aren", "Strings are"));
	printf("%d\n", ft_strcmp(" aren", "Strings are"));
	printf("%d\n", ft_strcmp("StRings aren", "Strings are"));
	return (0);
} */

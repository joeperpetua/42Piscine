/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:02:01 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/10 17:09:44 by jperpetu         ###   ########.fr       */
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

/*int	main(void)
{
	ft_putstr("Hello how are you doing?\n.....\n");
	return (0);
}*/

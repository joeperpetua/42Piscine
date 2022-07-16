/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:12:18 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/10 17:24:02 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str + len))
	{
		len++;
	}
	return (len);
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(int nb)
{
	char	character;

	if (nb == 0)
	{
		return ;
	}
	character = (nb % 10) + '0';
	ft_convert(nb / 10);
	ft_putchar(character);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_convert(nb);
	}
}

int	main(void)
{
	int	len;

	len = ft_strlen("Hello. how are you doing?");
	ft_putnbr(len);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:08:53 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/13 18:09:39 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
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
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_convert(nb);
	}
	else
	{
		ft_convert(nb);
	}
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				is_same;

	i = 0;
	is_same = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
		{
			is_same = -1;
		}
		else if (s1[i] > s2[i])
		{
			is_same = 1;
		}
		i++;
	}
	return (is_same);
}

/*int	main(void)
{
	ft_putnbr(ft_strncmp("String 3", "String 2", 8));
	return (0);	
}*/

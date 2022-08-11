/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:54:31 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/28 20:30:45 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(int nb)
{
	if (nb == 0)
		return ;
	ft_convert(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar(nb + '0');
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_convert(nb);
	}
	else
		ft_convert(nb);
} */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

/* int	main(void)
{
	int	array[] = {5, 1, 2, 658, 834, 35, 434, 72118, 9234};
	void	(*p_putnbr)(int);

	p_putnbr = &ft_putnbr;
	ft_foreach(array, 9, ft_putnbr);
	return (0);
} */
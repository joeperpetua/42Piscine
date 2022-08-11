/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:53:11 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/25 12:00:48 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	int	i = 2147395600;

	printf("sqrt of %d = %d\n", i, ft_sqrt(i));
	printf("0:%d\n", ft_sqrt(0));
	printf("1:%d\n", ft_sqrt(1));
	printf("0:%d\n", ft_sqrt(1640045925));
	printf("0:%d\n", ft_sqrt(2147483646));
	printf("0:%d\n", ft_sqrt(1885353290));
	printf("0:%d\n", ft_sqrt(689421908));
	printf("0:%d\n", ft_sqrt(695993205));
	printf("0:%d\n", ft_sqrt(116592053));
	printf("0:%d\n", ft_sqrt(997802203));
	printf("0:%d\n", ft_sqrt(2147483647));
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
} */
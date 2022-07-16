/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 18:07:12 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/08 12:28:06 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_while(char n1, char n2, char n3)
{
	while (n1 <= '7')
	{
		while (n2 <= '8')
		{
			while (n3 <= '9')
			{
				write(1, &n1, 1);
				write(1, &n2, 1);
				write(1, &n3, 1);
				if (n1 != '7')
				{
					write(1, ", ", 2);
				}
				n3++;
			}
			n2++;
			n3 = n2 + 1;
		}
		n1++;
		n2 = n1 + 1;
		n3 = n2 + 1;
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	ft_while(n1, n2, n3);
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/

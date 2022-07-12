/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:11:09 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/12 16:02:42 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = ' ';
	while (*(str + i))
	{
		c = *(str + i);
		write(1, &c, 1);
		i++;
	}
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_is_alpha(char c)
{
	int	is_alpha;

	is_alpha = 1;
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
	{
		is_alpha = 0;
	}
	return (is_alpha);
}

int	ft_is_num(char c)
{
	int	is_numeric;

	is_numeric = 1;
	if (c < '0' || c > '9')
	{
		is_numeric = 0;
	}
	return (is_numeric);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	c = ' ';
	ft_strcpy(str, ft_strlowcase(str));
	while (str[i])
	{
		c = str[i - 1];
		if (ft_is_alpha(str[i]) && ft_is_alpha(c) == 0
			&& ft_is_num(c) == 0)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[100] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcpy(str, ft_strcapitalize(str));
	ft_putstr(str);
	ft_putstr("\n");
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpetu <jperpetu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:54:03 by jperpetu          #+#    #+#             */
/*   Updated: 2022/07/28 17:12:29 by jperpetu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_found(char c, char *charset, int return_index)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			if (return_index)
				return (i);
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_get_word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (*str && ft_found(*str, charset, 0) == 0)
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_get_word_count(char *str, char *charset)
{
	int	word_len;
	int	word_count;

	word_len = 0;
	word_count = 0;
	while (*str)
	{
		while (*str && ft_found(*str, charset, 0) == 1)
			str++;
		word_len = ft_get_word_len(str, charset);
		str += word_len;
		if (word_len)
			word_count++;
	}
	return (word_count);
}

char	*ft_get_word(char *str, char *charset)
{
	char	*word;
	int		word_len;
	int		i;

	word_len = ft_get_word_len(str, charset);
	word = (char *) malloc(sizeof(char) * (word_len + 1));
	i = 0;
	while (*str && ft_found(*str, charset, 0) == 0)
	{
		word[i] = *str;
		i++;
		str++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;

	i = 0;
	strs = (char **) malloc(sizeof(char *)
			* (ft_get_word_count(str, charset) + 1));
	while (*str)
	{
		while (*str && ft_found(*str, charset, 0) == 1)
			str++;
		if (*str)
			strs[i++] = ft_get_word(str, charset);
		while (*str && ft_found(*str, charset, 0) == 0)
			str++;
	}
	strs[i] = '\0';
	return (strs);
}

/* int main(void)
{
	char    **strs;
	int		i;

	i = 0;
	strs = ft_split("Split,t h i s,string,s+o", ",+");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("-------------------\n");
	i = 0;
	strs = ft_split("Ceci&est$un#################################succes@!", "&$#@");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("-------------------\n");
	i = 0;
	strs = ft_split("Success", "CUT");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("-------------------\n");
	i = 0;
	strs = ft_split("Success", "");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("-------------------\n");
	i = 0;
	strs = ft_split("", "");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("-------------------\n");
	i = 0;
	strs = ft_split("", "CUT");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("-------------------\n");
	i = 0;
	strs = ft_split("       ", "       ");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("-------------------\n");
	i = 0;
	strs = ft_split("         ", "       ");
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("-------------------\n");
	free(strs);
	return (0);
} */

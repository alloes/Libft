/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:21:47 by alopes-n          #+#    #+#             */
/*   Updated: 2022/07/02 00:11:21 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_words(const char *str, char c)
{
	size_t	words;

	words = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			while (*str != c && *str)
				str++;
			words++;
		}
	}
	return (words);
}

static int	word_len(const char *str, char c, int i)
{
	size_t	len;

	len = 0;
	while (str[i] && str[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void	ft_word_write(char **split, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			split[j] = (char *)ft_calloc(sizeof(char), (word_len(s, c, i) + 1));
			if (!split[j])
				return ;
			k = 0;
			while (s[i] && s[i] != c)
			{
				split[j][k] = s[i];
				i++;
				k++;
			}
			j++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = (char **)ft_calloc(sizeof(char *), (ft_num_words(s, c) + 1));
	if (!split)
		return (NULL);
	ft_word_write(split, s, c);
	return (split);
}
// meu deus meu senhor 
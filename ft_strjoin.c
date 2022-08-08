/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:39:04 by alopes-n          #+#    #+#             */
/*   Updated: 2022/06/16 22:05:48 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strscat(char *dest, const char *src, size_t start)
{
	size_t	index;

	index = 0;
	while (src[index])
	{
		dest[index + start] = src[index];
		index++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	join_len;

	if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (ft_strdup(""));
		else if (*s1 == '\0')
			return (ft_strdup(s2));
		else
			return (ft_strdup(s1));
	}
	join_len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(sizeof(char), join_len + 1);
	if (!join)
		return (NULL);
	ft_strscat(join, s1, 0);
	ft_strscat(join, s2, ft_strlen(s1));
	return (join);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:16:10 by alopes-n          #+#    #+#             */
/*   Updated: 2022/06/17 20:52:06 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)ft_calloc(sizeof(char), len + 1);
	if (!result)
		return (NULL);
	while (len > 0)
	{
		result[len - 1] = f((len - 1), (s[len - 1]));
		len--;
	}
	return (result);
}

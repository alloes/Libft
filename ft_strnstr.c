/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:58:13 by alopes-n          #+#    #+#             */
/*   Updated: 2022/06/08 01:02:02 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*temp_b;
	size_t	l_len;

	temp_b = (char *)big;
	l_len = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return (temp_b);
	while (i < len && temp_b[i] != '\0')
	{
		if ((ft_strncmp(&temp_b[i], little, l_len) == 0) && (i + l_len <= len))
		{
			return (&temp_b[i]);
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:26:51 by alopes-n          #+#    #+#             */
/*   Updated: 2022/06/06 21:35:26 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	index;

	src_len = ft_strlen(src);
	dst_len = 0;
	index = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	if (dst_len < size)
	{
		while (src[index] && index + dst_len + 1 < size)
		{
			dst[dst_len + index] = src[index];
			index++;
		}
		dst[index + dst_len] = '\0';
	}
	return (dst_len + src_len);
}

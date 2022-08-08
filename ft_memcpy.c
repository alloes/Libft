/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:13:56 by alopes-n          #+#    #+#             */
/*   Updated: 2022/06/02 16:49:51 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	index;

	temp_dest = (char *) dest;
	temp_src = (char *) src;
	index = 0;
	while (index < n)
	{
		temp_dest[index] = temp_src[index];
		index++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:51:38 by alopes-n          #+#    #+#             */
/*   Updated: 2022/06/21 14:40:20 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if ((nmemb * size) / size != nmemb && size != 0)
		return (NULL);
	result = (void *)malloc(size * nmemb);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}

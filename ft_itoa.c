/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 19:31:16 by alopes-n          #+#    #+#             */
/*   Updated: 2022/06/21 14:32:10 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	result_size(size_t n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

static size_t	is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	temp_n;
	size_t	negative;
	size_t	size;

	temp_n = n;
	negative = is_negative(n);
	if (negative == 1)
		temp_n *= -1;
	size = result_size(temp_n);
	result = ft_calloc(sizeof(char), (negative + size + 1));
	if (!result)
		return (NULL);
	if (negative == 1)
		result[0] = '-';
	while (size > 0)
	{
		result[(size - 1) + negative] = (temp_n % 10) + '0';
		temp_n /= 10;
		size--;
	}
	return (result);
}

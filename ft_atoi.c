/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:02:30 by alopes-n          #+#    #+#             */
/*   Updated: 2022/06/06 23:36:26 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	index;
	int		sing;
	int		number;

	index = 0;
	while ((nptr[index] >= 9 && nptr[index] <= 13) || nptr[index] == 32)
		index++;
	sing = 1;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sing *= -1;
		index ++;
	}
	number = 0;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		number = (nptr[index] - '0') + (number * 10);
		index++;
	}
	return (number * sing);
}

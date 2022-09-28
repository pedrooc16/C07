/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorais- <amorais-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:55:10 by amorais-          #+#    #+#             */
/*   Updated: 2022/09/26 12:01:11 by amorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*array;

	size = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * size);
	i = -1;
	while (++i < size)
	{
		array[i] = min;
		min++;
	}
	*range = array;
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorais- <amorais-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:53:59 by amorais-          #+#    #+#             */
/*   Updated: 2022/09/26 16:40:59 by amorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	sizeneeded(int size, char **strs, char *sep)
{
	int	i;
	int	c;
	int	x;

	i = 0;
	c = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x])
		{
			x++;
			c++;
		}
		i++;
	}
	x = 0;
	while (sep[x])
		x++;
	return (c + (size - 1) * x);
}

char	*join(int size, char **strs, char *sep)
{
	char	*joined;
	int		i;
	int		x;
	int		j;

	i = 0;
	j = 0;
	joined = malloc(sizeof(char) * sizeneeded(size, strs, sep));
	while (i < size)
	{
		x = -1;
		while (strs[i][++x])
		{
			joined[j] = strs[i][x];
			j++;
		}
		i++;
		x = -1;
		while (sep[++x] && i < size)
		{
			joined[j] = sep[x];
			j++;
		}
	}
	return (joined);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;

	if (size > 0)
		joined = join(size, strs, sep);
	else
		joined = malloc(0);
	return (joined);
}

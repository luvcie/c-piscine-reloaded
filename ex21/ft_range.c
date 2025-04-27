/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:25:03 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/25 18:45:26 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main(void)
{
	int	*result;
	int	i;

	result = ft_range(2, 42);
	i = 0;
	while (i < 40)
	{
		printf("%d \n", result[i]);
		i++;
	}
//	free(result);
	return (0);
}*/

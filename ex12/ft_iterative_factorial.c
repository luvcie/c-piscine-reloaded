/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:45:41 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/27 14:24:44 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	number;
	int	i;

	number = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		if (number > 2147483647 / i)
		{
			return (0);
		}
		number *= i;
		i++;
	}
	return (number);
}
/*
int	main(void)
{
	printf("ft_iterative_factorial(10) = %d \n", ft_iterative_factorial(10));
	return (0);
}*/

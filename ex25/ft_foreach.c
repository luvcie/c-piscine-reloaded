/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:37:38 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/25 21:49:32 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	printer(int nbr)
{
	printf("%d  \n", nbr);
}

int	main(void)
{
	int	nbrs[3] = {-3, 0, 6};
	int	len;

	len = sizeof(nbrs) / sizeof(nbrs[0]);
	ft_foreach(nbrs, len, &printer);
	return (0);
}*/

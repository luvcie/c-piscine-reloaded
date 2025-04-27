/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:38:01 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/25 22:25:05 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}
/*
int	ifstartswithc(char *str)
{
	if (str != 0 && str[0] == 'c')
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	char	*tab0[] = {"coconut", "hello", "handbag", "test", "computer", "\0"};
	int	result;

	result = ft_count_if(tab0, &ifstartswithc);
	printf("amount of strings starting with c: %d\n", result);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:09:20 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/23 18:23:20 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		++i;
		++str;
	}
	return (i);
}
/*
int	main(void)
{
	int	len;

	len = ft_strlen("123456789");
	printf("length: %d\n", len);
	return (0);
}*/

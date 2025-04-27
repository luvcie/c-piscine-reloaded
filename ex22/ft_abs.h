/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:03:45 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/25 19:37:16 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define ABS(Value) (((Value) < 0) ? -(Value) : (Value))
/*          [Condition]  [? if true, then ->] [-Result] [: else] [Result if False]
    way to use it
#include <abs.h>
int	main(void)
{
	int value0;
	int value1;
	int abs0;
	int abs1;

	value0 = 5;
	value1 = 25;
	abs0 = ABS(value0);
	abs1 = ABS(value1);
	printf("Absolute of %d is %d\n", value0, abs0);
	printf("Absolute of %d is %d\n", value1, abs1);
	return (0);
}*/

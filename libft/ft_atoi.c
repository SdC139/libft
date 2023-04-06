/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:34:13 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/04 13:43:31 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{	
	int	i;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i ++;
	while (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
				sign *= -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		number = (number * 10) + (str[i] - 48);
		i ++;
	}
	number *= sign;
	return (number);
}

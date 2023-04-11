/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:08:44 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/11 15:29:08 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{	
	int	i;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i ++;
	if (str[i] == '+')
	{	
		i ++;
	}
	else if (str[i] == '-')
	{
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

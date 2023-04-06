/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:44:45 by sde-carl          #+#    #+#             */
/*   Updated: 2023/03/31 19:44:45 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{	
	int	index;

	index = ft_strlen(str);
	while (index >= 0)
	{	
		if (str[index] == (char)c)
			return ((char *)str + index);
		index --;
	}
	return (0);
}

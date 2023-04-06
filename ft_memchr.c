/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:39:32 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/04 14:19:59 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	char	*string;
	size_t	index;

	index = 0;
	string = (char *)s;
	while (index < n)
	{	
		if ((unsigned char)string[index] == (unsigned char)c)
			return (string + index);
		index ++;
	}
	return (NULL);
}

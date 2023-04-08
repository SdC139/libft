/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:41:15 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/08 17:10:15 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	size_t	index;

	if (!dest && !src)
		return (NULL);
	index = 0;
	while (index < n)
	{	
		((char *)dest)[index] = ((char *)src)[index];
		index ++;
	}
	return (dest);
}

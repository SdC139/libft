/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:41:25 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/08 20:19:56 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((!dest && !src) || (src == dest))
		return (NULL);
	if ((size_t)dest - (size_t)src < n)
	{	
		i = n - 1;
		while (i >= 0 && i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i --;
		}
	}
	else
	{
		while (i < n)
		{	
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i ++;
		}
	}
	return (dest);
}

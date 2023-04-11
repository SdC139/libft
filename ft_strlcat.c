/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:43:51 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/11 16:29:53 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dstlen;

	if (!src && !dest)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dest);
	if (size <= dstlen)
		return (ft_strlen(src) + size);
	ft_strlcpy((dest + dstlen), src, (size - dstlen));
	return (dstlen + ft_strlen(src));
}	

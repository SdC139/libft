/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:43:51 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/07 23:19:57 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{	
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	if (size <= len_dest)
		return (size + len_src);
	i = len_dest;
	j = 0;
	while (src[j] && i < size - 1)
	{	
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

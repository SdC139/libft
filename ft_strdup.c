/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:42:43 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/04 14:23:33 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{	
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) +1);
	if (!dest)
		return (NULL);
	while (src[index])
	{	
		dest[index] = src[index];
		index ++;
	}
	dest[index] = '\0';
	return (dest);
}

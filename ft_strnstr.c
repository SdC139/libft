/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:44:34 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/07 23:30:25 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{	
	size_t	i;
	size_t	j;

	i = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!n)
		return (NULL);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{	
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < n)
		{	
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j ++;
		}
		i ++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:39:43 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/04 14:20:26 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while (n--)
	{	
		if (*string1 != *string2)
			return (*string1 - *string2);
		string1++;
		string2++;
	}
	return (0);
}

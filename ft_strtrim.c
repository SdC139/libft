/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:44:57 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/04 14:45:41 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i ++;
	while (s1[i])
		str[j++] = s1[i++];
	str[j] = '\0';
	k = ft_strlen(str) - 1;
	while (k >= 0 && ft_strchr(set, str[k]))
		str[k--] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:04:46 by sde-carl          #+#    #+#             */
/*   Updated: 2023/04/08 21:17:24 by sde-carl         ###   ########.fr       */
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
	while (s1[i] && ft_strchr(set, s1[i]))
		i ++;
	k = ft_strlen(s1) - 1;
	while (k > i && ft_strchr(set, s1[k]))
		k --;
	str = (char *)malloc(sizeof(char) * (k - i + 2));
	if (!str)
		return (NULL);
	while (i <= k)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}

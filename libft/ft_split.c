/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:42:58 by sde-carl          #+#    #+#             */
/*   Updated: 2023/03/31 19:42:58 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s || !(arr = (char **)malloc(sizeof(char *)*(ft_count_words(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		k = 0;
		if (s[i] != c)
		{	
			if (!(arr[j] = (char *)malloc(sizeof(char)*(ft_word_len(s, c, i) + 1))))
				return (NULL);
			while (s[i] != c && s[i])
				arr[j][k++] = s[i++];
			arr[j++][k] = '\0';
		}
		else
			i++;
	}
	arr[j] = NULL;
	return (arr);
}

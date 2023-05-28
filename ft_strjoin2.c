/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-carl <sde-carl@student.42roma.it >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:45:43 by sde-carl          #+#    #+#             */
/*   Updated: 2023/05/28 20:45:43 by sde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin2(char *sx_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!sx_str)
	{
		sx_str = (char *)malloc(1 * sizeof(char));
		sx_str[0] = '\0';
	}
	if (!sx_str || !buff)
		return (NULL);
	str = malloc((ft_strlen(sx_str) + ft_strlen(buff) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (sx_str)
		while (sx_str[++i] != '\0')
			str[i] = sx_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(sx_str) + ft_strlen(buff)] = '\0';
	free(sx_str);
	return (str);
}

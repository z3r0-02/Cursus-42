/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:32:34 by thbui             #+#    #+#             */
/*   Updated: 2023/01/19 14:50:15 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))	//start can only be inside of the strlen of *s
	{
		res = malloc(sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (start + len > ft_strlen(s))	//condition when len is too big, and not needed
		len = ft_strlen(s) - start;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:36:09 by thbui             #+#    #+#             */
/*   Updated: 2023/01/18 17:43:10 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cmp(const char *str, const char *compare)
{
	int	i;

	i = 0;
	while (str[i] && compare[i])
	{
		if (str[i] != compare[i])
			return (0);
		i++;
	}
	return (compare[i] == '\0');
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (haystack[i] != '\0' && i <= len - ft_strlen(needle))
	{
		if (cmp(&haystack[i], needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 00:20:59 by thbui             #+#    #+#             */
/*   Updated: 2023/01/14 00:16:18 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	const char	*source;
	size_t	i;

	dest = dst;
	source = src;
	i = 0;
	if (dest < source)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else if (dest > source)
	{
		while (len > i)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	}
	return (dest);
}
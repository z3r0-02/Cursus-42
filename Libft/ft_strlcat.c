/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:39:41 by thbui             #+#    #+#             */
/*   Updated: 2023/01/19 14:31:30 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dest && !size)
		return (0);
	i = 0;
	j = ft_strlen(dest);
	if (size <= j)		//is dest lenght is less or equal to size
		return (size + ft_strlen(src));
	while (size && src[i] != '\0' && j + 1 < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));	//the lenght of dest + the rest of src begining from src[i]
}

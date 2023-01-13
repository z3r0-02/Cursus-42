/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 22:34:52 by thbui             #+#    #+#             */
/*   Updated: 2023/01/13 00:19:54 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *dst;
    char    *sr;

    i = 0;
    dst = (char *)dest;
    sr = (char *)src;
    while (i < n)
    {
        dst[i] = sr[i];
        i++;
    }
    return (dest);
}
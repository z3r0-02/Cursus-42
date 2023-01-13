/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:33:40 by thbui             #+#    #+#             */
/*   Updated: 2023/01/13 22:47:21 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char *p2;
	int	i;

	i = 0;
	p1 = s1;
	p2 = s2;
	if (p1 == p2)
		return (0);
	while (n != 0)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		n--;
		i++;
	}
	return (0);
}
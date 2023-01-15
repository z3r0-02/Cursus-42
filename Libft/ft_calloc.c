/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:36:02 by thbui             #+#    #+#             */
/*   Updated: 2023/01/15 13:39:55 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = malloc(size * nmemb);
	if ((nmemb * size) < nmemb || (nmemb * size) < size)
		return (NULL);
	if (res == NULL)
		return (0);
	ft_bzero (res, size * nmemb);
	return (res);
}

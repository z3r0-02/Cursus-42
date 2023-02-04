/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:36:02 by thbui             #+#    #+#             */
/*   Updated: 2023/02/05 00:26:36 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb == 0 || size == 0)		//cannot multiply with zero
	{
		nmemb = 1;
		size = 1;
	}
	if ((nmemb * size) < nmemb || (nmemb * size) < size)
		return (NULL);
	res = malloc(size * nmemb);
	if (!res)
		return (NULL);
	ft_bzero (res, size * nmemb);
	return (res);
}

//-----------------------------------------------------------------------------//

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = malloc(size * nmemb);
	if (!res)
		return (NULL);
	ft_bzero(res, size * nmemb);
	return (res);
}

//----------------------------------------------------------------------------//

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = malloc(size * nmemb);
	if (res)
		ft_bzero(res, size * nmemb);
	return (res);
}

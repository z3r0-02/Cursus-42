/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:24:33 by thbui             #+#    #+#             */
/*   Updated: 2023/01/16 03:20:38 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	array_count(const char *s, char c)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			num++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (num);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		ar;

	i = 0;
	res = (char **)malloc((array_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	ar = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j > 0)
		{
			res[ar] = (char *)malloc((j + 1) * sizeof(char));
			if (!res[ar])
				return (NULL);
			ft_strlcpy(res[ar], &s[i], j + 1);
			ar++;
			i = i + j;
		}
	}
	res[ar] = NULL;
	return (res);
}

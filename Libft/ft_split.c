/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:24:33 by thbui             #+#    #+#             */
/*   Updated: 2023/01/18 17:38:31 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	array_count(const char *s, char c)
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

static char	*allocate(int *i, int j, const char *s)
{
	char	*res;

	res = (char *)malloc((j + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s[*i], j + 1);
	*i = *i + j;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		ar;

	i = 0;
	if (!s)
		return (NULL);
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
			res[ar++] = allocate(&i, j, s);
	}
	res[ar] = NULL;
	return (res);
}

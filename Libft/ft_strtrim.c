/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:48:08 by thbui             #+#    #+#             */
/*   Updated: 2023/01/15 20:22:06 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_check(const char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
int lenght_check(const char *s1, const char *set)
{
	int	i;
	int	len;
	int	yes;

	i = 0;
	len = ft_strlen(s1) - 1;
	yes = 0;
	while (set_check(s1[i], set))
	{
		yes++;
		i++;
	}
	while (i < len && set_check(s1[len], set))
	{
		len--;
		yes++;
	}
	return (yes);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;
	int		i;
	int		s;

	len = ft_strlen(s1) - lenght_check(s1, set);
	i = 0;
	s = 0;
	if (len == 0)
	{
		res = malloc(1 * sizeof(char));
		if (!res)
			return (NULL);
		res[i] = '\0';
		return (res);
	}
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (set[0] && set_check(s1[s], set))
		s++;
	while (i < len)
	{
		res[i] = s1[s + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}	

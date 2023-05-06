/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:48:08 by thbui             #+#    #+#             */
/*   Updated: 2023/02/04 22:00:41 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_check(const char c, char const *set)	//checks if the character is in set
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

static int	in_the_set(const char *s1, const char *set)	//returns how many from s1 are in set
{
	int	i;
	int	len;
	int	in_set;

	i = 0;
	len = ft_strlen(s1) - 1;
	in_set = 0;
	while (set_check(s1[i], set))	//from the begining
	{
		in_set++;
		i++;
	}
	while (i < len && set_check(s1[len], set))	//from the end
	{
		len--;
		in_set++;
	}
	return (in_set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		len;
	int		i;
	int		s;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1) - in_the_set(s1, set);
	i = 0;
	s = 0;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (set[0] && set_check(s1[s], set))	//checks if the character is in set, if yes, it will move on
		s++;
	while (i < len)	//adds the characters not in the set in res
	{
		res[i] = s1[s + i];
		i++;
	}
	res[i] = '\0';	//no need to check *set at the end of *s1, because the len has cut them out
	return (res);
}

//------------------------------------------------------------------------------//

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		len;

	len = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (len > start && ft_strchr(set, s1[len - 1]))
		len--;
	str = malloc(sizeof(char) * (len - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (len > start)
		str[i++] = s1 [start++];
	str[i] = '\0';
	return (str);
}
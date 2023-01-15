/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:48:08 by thbui             #+#    #+#             */
/*   Updated: 2023/01/15 20:01:12 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int check_variable(const char *s1, const char *set)
// {
// 	char	c;
// 	int	i;

// 	c = s1[0];
// 	i = 0;
// 	while (s1[i])
// 	{
// 		if (c != s1[i])
// 			return (1);
// 		else if (c != set[0])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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
	while (s1[i] != s1[len] && set_check(s1[len], set))
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
	// if (check_variable(s1, set) == 0)
	// 	return (NULL);
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

// #include <stdio.h>
// int	main()
// {
// 	const char s1[] = "       ";
// 	printf("%s", ft_strtrim(s1, " "));
// 	return (0);
// }

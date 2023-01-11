/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:23:59 by thbui             #+#    #+#             */
/*   Updated: 2023/01/11 19:30:38 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int ft_strrchr(char *str, char c)
{
    int i;

    i = ft_strlen(str) - 1;
    while (str[i])
    {
        if (str[i] == c)
        {
            return (i);
            break;
        }
        i--;
    }
    return (0);
}

#include <stdio.h>

int main (void)
{
    char str[] = "hello world";
    char c = 'l';

    printf("%d", ft_strrchr(str, c));
    return (0);
}
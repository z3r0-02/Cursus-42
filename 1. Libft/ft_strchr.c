/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:48:40 by thbui             #+#    #+#             */
/*   Updated: 2023/01/11 19:02:48 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strchr (char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return (c);
            break;
        }
        i++;
    }
    return (0);
}

#include <stdio.h>

int main (void)
{
    char str[] = "hello world";
    char c = 'h';

    printf("%d", ft_strchr(str, c));
    return (0);
}
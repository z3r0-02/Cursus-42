/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:42:08 by thbui             #+#    #+#             */
/*   Updated: 2023/01/11 18:13:33 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum (int c)
{
    if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}

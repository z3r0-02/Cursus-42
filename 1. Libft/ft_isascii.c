/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:35:17 by thbui             #+#    #+#             */
/*   Updated: 2023/01/11 18:36:24 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii (char c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}
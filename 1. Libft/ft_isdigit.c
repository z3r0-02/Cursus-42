/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:53:13 by thbui             #+#    #+#             */
/*   Updated: 2023/01/09 15:54:51 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit (char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

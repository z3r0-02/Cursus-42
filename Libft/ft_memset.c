/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:13:48 by thbui             #+#    #+#             */
/*   Updated: 2023/01/12 14:23:25 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(char *str, char c, int size)
{
	int	i;

	i = 0;
	while (str[i] <= size)
	{


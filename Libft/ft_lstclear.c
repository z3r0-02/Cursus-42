/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:07:37 by thbui             #+#    #+#             */
/*   Updated: 2023/01/18 18:02:37 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*updated;
	t_list	*list;

	if (!lst)
		return ;
	updated = *lst;
	if (*lst)
	{
		while (updated)
		{
			if (!updated)
				return ;
			list = updated->next;
			ft_lstdelone(updated, (*del));
			updated = list;
		}
		*lst = NULL;
	}
}

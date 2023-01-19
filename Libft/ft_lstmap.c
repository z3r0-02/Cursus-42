/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:25:21 by thbui             #+#    #+#             */
/*   Updated: 2023/01/19 13:58:15 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*temp;		//temporary lst

	if (!lst || !f || !del)
		return (NULL);
	start = 0;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)		//if (*f) fails, deletes the lst
		{
			ft_lstclear(&start, (*del));
			return (NULL);
		}
		else
			ft_lstadd_back(&start, temp);
		lst = lst->next;
	}
	return (start);
}

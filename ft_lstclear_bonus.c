/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 01:23:32 by mkchikec          #+#    #+#             */
/*   Updated: 2019/10/27 01:31:38 by mkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;
	t_list *prev;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		prev = list;
		list = list->next;
		del(prev->content);
		free(prev);
	}
	*lst = NULL;
}

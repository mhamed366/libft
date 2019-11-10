/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 10:08:55 by mkchikec          #+#    #+#             */
/*   Updated: 2019/10/29 10:09:01 by mkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*lst;

	if (!(lst = ((t_list *)malloc(sizeof(t_list)))))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

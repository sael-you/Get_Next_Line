/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:29:22 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 16:48:15 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*new;
	t_list	*current;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = (*f)(lst);
		tmp = ft_lstnew(new->content, new->content_size);
		if (first)
		{
			current->next = tmp;
			current = current->next;
		}
		else
		{
			first = tmp;
			current = first;
		}
		lst = lst->next;
	}
	return (first);
}

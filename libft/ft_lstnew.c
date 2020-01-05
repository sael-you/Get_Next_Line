/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:26:27 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/20 00:22:53 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lstnew;

	if (!(lstnew = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
	}
	else
	{
		lstnew->content = malloc(sizeof(lstnew->content) * content_size);
		ft_memcpy(lstnew->content, (char *)content, content_size);
		lstnew->content_size = content_size;
	}
	lstnew->next = (NULL);
	return (lstnew);
}

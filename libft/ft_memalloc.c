/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:38:46 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 15:57:20 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *tab;

	if (!(tab = malloc(size)))
		return (NULL);
	return (ft_memset(tab, 0, size));
}

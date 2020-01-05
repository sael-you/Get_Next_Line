/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:50:53 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 15:58:10 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tab;

	size += 1;
	if (!(tab = (char *)malloc(size)))
		return (NULL);
	return (ft_memset(tab, 0, size));
}

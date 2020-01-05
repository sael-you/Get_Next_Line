/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:08:38 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/20 01:04:51 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (s1 && s2 && n--)
	{
		if (!n)
			break ;
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

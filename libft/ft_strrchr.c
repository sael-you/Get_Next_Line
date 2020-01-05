/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:17:53 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/08 15:18:43 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tmp;

	tmp = NULL;
	if (!c)
		return ((char *)s + ft_strlen((char *)s));
	while (*s)
		if (*s++ == c)
			tmp = ((char *)s) - 1;
	return (tmp);
}

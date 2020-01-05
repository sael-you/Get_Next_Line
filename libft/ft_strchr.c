/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:13:41 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/08 15:14:12 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *tab;

	tab = (char *)s;
	while (*tab && *tab != (char)c)
		tab++;
	if (*(unsigned char *)tab == (unsigned char)c)
		return (tab);
	if (!c && !(*tab))
		return (tab);
	return (NULL);
}

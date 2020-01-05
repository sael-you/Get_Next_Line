/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:00:36 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/20 00:33:53 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*tab;

	i = 0;
	if (!s)
		return (NULL);
	if (!(tab = ft_strnew(len)))
		return (NULL);
	while (len--)
		tab[i++] = s[start++];
	return (tab);
}

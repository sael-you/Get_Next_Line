/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:02:59 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 16:07:44 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	k = -1;
	j = 0;
	if (!s)
		return ((char *)s);
	i = ft_strlen((char *)s);
	while (s[j] != '\0' && ft_isspace(s[j]))
		j++;
	if (j < i)
		while (ft_isspace(s[--i]))
			;
	if (!(tab = ft_strnew((i - j + 1))))
		return (NULL);
	while (j <= i)
		tab[++k] = s[j++];
	return (tab);
}

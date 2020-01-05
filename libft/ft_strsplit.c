/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:05:01 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 16:02:51 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		slen;
	char	**tab;

	i = 0;
	j = -1;
	if (!s || !(tab = (char **)malloc(sizeof(char *) * ft_countword(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			slen = 0;
			while (s[i] != c && s[i++])
				slen++;
			tab[++j] = ft_strnew(slen);
		}
		if (!s[i++])
			break ;
	}
	ft_strcpy_dd(tab, s, c);
	tab[ft_countword(s, c) - 1] = 0;
	return (tab);
}

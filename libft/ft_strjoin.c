/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:01:45 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 16:10:02 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*tab;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	if (!(tab = ft_strnew(ft_strlen((char *)s2) + ft_strlen((char *)s1))))
		return (NULL);
	while (s1[++j])
		tab[++i] = s1[j];
	j = -1;
	while (s2[++j])
		tab[++i] = s2[j];
	return (tab);
}

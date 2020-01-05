/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:57:26 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 16:00:21 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tab;

	i = -1;
	if (!s)
		return (NULL);
	if (!(tab = ft_strnew(ft_strlen((char *)s))))
		return (NULL);
	while (s[++i])
		tab[i] = f(s[i]);
	return (tab);
}

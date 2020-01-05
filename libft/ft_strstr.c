/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:15:03 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/20 00:33:38 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;
	char	*tmp;

	if (!(*to_find))
		return ((char *)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (!to_find[j])
			{
				tmp = (char *)(str + i);
				return (tmp);
			}
		}
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:15:20 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 15:54:12 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	size;

	if (!ft_strcmp(str, to_find))
		return ((char *)str);
	if (!*to_find)
		return ((char *)str);
	i = 0;
	size = ft_strlen(to_find);
	while (str[i] && len)
	{
		if (len >= size && !(ft_strncmp(str + i, to_find, size)))
			return ((char*)str + i);
		i++;
		len--;
	}
	return (NULL);
}

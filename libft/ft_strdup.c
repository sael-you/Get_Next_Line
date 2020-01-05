/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 19:10:27 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 15:52:14 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if ((str = (char *)malloc(sizeof(char) * i + 1)))
	{
		i = -1;
		while (src[++i])
			str[i] = src[i];
		str[i] = '\0';
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:11:56 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 16:20:30 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*tab;
	int				tmp;
	int				len;
	unsigned int	unb;

	tmp = n;
	unb = ((n < 0) ? (n * -1) : n);
	len = 2 + (n < 0);
	while (tmp /= 10)
		len++;
	if (!(tab = malloc(sizeof(char) * len)))
		return (NULL);
	tab[--len] = '\0';
	ft_divnbrtab(len, unb, tab);
	if (n < 0)
		tab[0] = '-';
	return (tab);
}

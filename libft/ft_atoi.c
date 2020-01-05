/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:22:57 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/21 20:34:45 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	nb;
	int		sign;
	int		i;

	nb = 0;
	sign = 1;
	i = -1;
	if (!ft_isascii(*str))
		return (0);
	if (!str[++i])
		return (nb);
	while (str[i] <= 32 && str[i] != 27)
		(i++);
	if ((str[i] == '+' || str[i] == '-') && str[i++] == '-')
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb > (nb * 10 + (str[i] - '0')))
			return (sign == -1 ? 0 : -1);
		nb = (nb * 10) + (str[i++] - 48);
	}
	return ((int)nb * sign);
}

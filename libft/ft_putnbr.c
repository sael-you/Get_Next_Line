/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:18:13 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/08 16:19:09 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int				signe;
	unsigned int	unb;

	signe = 0;
	if (n < 0)
	{
		signe = 1;
		unb = n * -1;
		ft_putchar('-');
	}
	else
		unb = n;
	if (unb > 9)
		ft_putnbr(unb / 10);
	ft_putchar((unb % 10) + 48);
}

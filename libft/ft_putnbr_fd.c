/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:21:04 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/08 16:21:28 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int				signe;
	unsigned int	unb;

	signe = 0;
	if (n < 0)
	{
		signe = 1;
		unb = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		unb = n;
	if (unb > 9)
		ft_putnbr_fd((unb / 10), fd);
	ft_putchar_fd(((unb % 10) + 48), fd);
}

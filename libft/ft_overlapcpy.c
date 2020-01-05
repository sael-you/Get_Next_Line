/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overlapcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 02:58:24 by saad              #+#    #+#             */
/*   Updated: 2019/04/21 21:20:52 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_overlapcpy(void *dest, const void *src, size_t n)
{
	if (dest > src)
		while (n--)
			*(unsigned char*)(dest + n) = *(unsigned char*)(src + n);
	return (dest);
}

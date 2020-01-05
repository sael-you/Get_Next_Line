/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:22:06 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 15:43:06 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *str1, const void *str2, int n)
{
	unsigned char *dest;
	unsigned char *src;

	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	while (n--)
		*dest++ = *src++;
	return (str1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:09:55 by sael-you          #+#    #+#             */
/*   Updated: 2019/04/22 15:42:17 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int x, int n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)ptr;
	while (n--)
		*tmp++ = (unsigned char)x;
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 01:31:57 by saad              #+#    #+#             */
/*   Updated: 2019/06/14 07:24:54 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (int argc, char **argv)
{
	char *line;
	int fd1;
	int gnl;
	
	if(argc)
	line = ft_strnew(555);
	fd1 = open(argv[1],O_RDONLY);

	while((gnl = get_next_line(fd1, &line)))
	{
	    printf("%d\n",gnl);
	    if(gnl == -1)
		break;
	    printf("%s\n",line);
	}
	return (0);
}

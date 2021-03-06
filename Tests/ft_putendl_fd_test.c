/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 13:56:51 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 13:56:54 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Activity/libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int fd;

	fd = open("testfile.txt", O_RDWR);
	if (fd == -1)
	{
		ft_putendl("ERROR openning file");
		return (-1);
	}
	if (argc == 2)
	{
		ft_putendl_fd(argv[1], fd);
		ft_putendl("File written check doc");
	}
	return (0);
}

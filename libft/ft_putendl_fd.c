/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:32:03 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 12:56:44 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return (0);
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
	return (1);
}

/* int	main(void)
{
	int	fd;
	ft_putendl_fd("Hello, World!", 1);
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putendl_fd("Hello, World!", fd);
		close(fd);
	}
	return (0);
} */
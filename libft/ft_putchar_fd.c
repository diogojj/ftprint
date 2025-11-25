/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:50:58 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 13:26:17 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return (0);
	write(fd, &c, 1);
	return (1);
}

/* int	main(void)
{
	int fd;

	ft_putchar_fd('A', 1);
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putchar_fd('B', fd);
		close(fd);
	}
	return (0);
} */
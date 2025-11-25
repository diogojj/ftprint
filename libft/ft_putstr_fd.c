/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:20:14 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 16:23:46 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;

	if (!s || fd < 0)
		return (write(fd, "(null)", 6));
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}

/* int	main(void)
{
	int	fd;
	ft_putstr_fd("Hello, World!", 1);
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putstr_fd("Hello, World!", fd);
		close(fd);
	}
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:37:02 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 16:19:27 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd, int count)
{
	long	num;
	long	lcount;

	lcount = count;
	if (fd < 0)
		return (lcount);
	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
		lcount++;
	}
	if (num >= 10)
	{
		lcount = ft_putnbr_fd(num / 10, fd, lcount);
	}
	lcount += ft_putchar_fd((num % 10) + '0', fd);
	return (lcount);
}

/* int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putnbr_fd(-2147483648, fd);
		close(fd);
	}
	return (0);
} */
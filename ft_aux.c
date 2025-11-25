/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:06:03 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 16:10:50 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

int	ft_putnbr_base(unsigned int n, char *base, int count)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (n >= base_len)
		count = ft_putnbr_base(n / base_len, base, count);
	if (ft_putchar_fd(base[n % base_len], 1) == -1)
		return (-1);
	return (++count);
}

int	ft_putaddres(unsigned long n, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		count = ft_putaddres(n / 16, count);
	if (ft_putchar_fd(base[n % 16], 1) == -1)
		return (-1);
	return (++count);
}

int	ft_checkaddres(void *n, int count)
{
	if (!n)
		return (write (1, "(nil)", 5));
	count += ft_putstr_fd("0x", 1);
	count = ft_putaddres((unsigned long)n, count);
	return (count);
}

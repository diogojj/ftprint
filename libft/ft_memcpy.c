/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:37:56 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 13:17:34 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/* int	main(void)
{
	char src[] = "HelloWorld";
	char dest[11];
	unsigned int n = 10;

	printf("Source before ft_memcpy: %s\n", src);
	printf("Destination before ft_memcpy: %s\n", dest);
	ft_memcpy(dest, src, n);
	dest[n] = '\0'; // Null-terminate the destination string
	printf("Destination after ft_memcpy: %s\n", dest);
	printf("Using standard memcpy for comparison:\n");
	char dest2[11];
	memcpy(dest2, src, n);
	dest2[n] = '\0'; // Null-terminate the destination string
	printf("Destination after standard memcpy: %s\n", dest2);
	return (0);
} */
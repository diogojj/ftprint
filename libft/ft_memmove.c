/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:31:44 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/13 17:36:34 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest_ptr > src_ptr)
	{
		i = n;
		while (i-- > 0)
			dest_ptr[i] = src_ptr[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}
/* int	main(void)
{
	char *src = "HelloWorld";
	char dest[13];
	size_t n = 10;
	printf("Source before ft_memmove: %s\n", src);
	printf("Destination before ft_memmove: %s\n", dest);
	ft_memmove(dest, src, n);
	// dest[n] = '\0'; // Null-terminate the destination string
	printf("Destination after ft_memmove: %s\n", dest);
	printf("Using standard memmove for comparison:\n");
	char dest2[11];
	memmove(dest2, src, n);
	dest2[n] = '\0'; // Null-terminate the destination string
	printf("Destination after standard memmove: %s\n", dest2);
	return (0);
} */
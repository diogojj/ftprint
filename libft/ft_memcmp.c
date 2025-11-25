/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:07:05 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 12:48:19 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/* int	main(void)
{
	const char	str1[] = "HelloWorld";
	const char	str2[] = "HelloWxrld";
	size_t		n;

	n = 10;
	printf("ft_memcmp result: %d\n", ft_memcmp(str1, str2, n));
	printf("Using standard memcmp for comparison:\n");
	printf("memcmp result: %d\n", memcmp(str1, str2, n));
	return (0);
} */

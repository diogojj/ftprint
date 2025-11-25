/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:55:12 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 13:20:23 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_ptr;

	s_ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_ptr[i] == (unsigned char)c)
			return ((void *)&s_ptr[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char str[] = "HelloWorld";
	int ch = 'W';
	size_t n = 10;

	char *result = (char *)ft_memchr(str, ch, n);
	if (result)
		printf("ft_memchr found '%c' at position: %ld\n", ch, result - str);
	else
		printf("ft_memchr did not find '%c'\n", ch);

	printf("Using standard memchr for comparison:\n");
	result = (char *)memchr(str, ch, n);
	if (result)
		printf("memchr found '%c' at position: %ld\n", ch, result - str);
	else
		printf("memchr did not find '%c'\n", ch);

	return (0);
} */
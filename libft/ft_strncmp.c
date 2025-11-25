/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:49:07 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 12:48:54 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/* int	main(void)
{
	const char *str1 = "HelloWorld";
	const char *str2 = "HellzThere";
	size_t n = 6;
	printf("ft_strncmp result: %d\n", ft_strncmp(str1, str2, n));
	printf("Using standard strncmp for comparison:\n");
	printf("strncmp result: %d\n", strncmp(str1, str2, n));
	return (0);
} */
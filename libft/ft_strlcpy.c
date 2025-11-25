/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:41:08 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/18 12:41:33 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* int	main(void)
{
	char test_src[] = "cristiano";
	char test_src2[] = "ronaldo";
	char test_dest[16];
	char test_dest2[16];
	int num = 3;

	printf("The src '%s'\n", test_src);
	printf("Returned Len of '%zu'\n", ft_strlcpy(test_dest, test_src, num));
	printf("Dest value is now '%s'\n", test_dest);
	printf("The src '%s'\n", test_src2);
	printf("Returned Len of '%zu'\n", strlcpy(test_dest2, test_src2, num));
	printf("Dest value is now '%s'\n", test_dest2);
	return (0);
} */
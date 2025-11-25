/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:43:01 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/18 12:38:32 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/* int	main(void)
{
	char dest[11] = "A";
	char dest2[11] = "A";
	printf("dest length is %ld and is %s \n", ft_strlcat(dest, "lorem", 11),
		dest);
	printf("dest2 length is %ld and is %s", strlcat(dest2, "lorem", 11), dest2);
	return (0);
} */
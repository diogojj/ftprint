/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:21:40 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 12:10:55 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*b;

	b = (unsigned char *)s;
	i = 0;
	while (i < n)
		b[i++] = c;
	return (b);
}

/* int	main(void)
{
	char	buffer[] = "HelloWorld";
	char	*test;

	test = ft_memset(buffer, 'A', 10);
	printf("Buffer after ft_memset: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", test[i]);
	}
	printf("\n");
	test = memset(buffer, 'A', 10);
	printf("Buffer after standard memset: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", test[i]);
	}
}
 */
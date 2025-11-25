/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:29:16 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/18 13:20:15 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_ptr[i] = 0;
		i++;
	}
}
/* int	main(void)
{
	char	buffer[] = "HelloWorld";
	char	test[11] = "HelloWorld";

	printf("Original buffer: %s\n", buffer);
	ft_bzero(buffer, 5);
	printf("Buffer after ft_bzero: %s\n", buffer);
	printf("Original test: %s\n", test);
	bzero(test, 5);
	printf("Test after standard bzero: %s\n", test);
	return (0);
}
 */
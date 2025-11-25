/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:20:11 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 12:05:46 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* int	main(void)
{
	const char *testStr = "Hello, World!";
	size_t len;

	len = ft_strlen(testStr);
	printf("Length of '%s' is: %zu\n", testStr, len);
	return (0);
} */
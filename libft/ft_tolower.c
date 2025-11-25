/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:20:41 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 13:13:29 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* int	main(void)
{
	char testChar1 = 'A';
	char testChar2 = 'z';
	char testChar3 = '5';
	char testChar4 = '#';
	printf("ft_tolower('%c') = '%c'\n", testChar1, ft_tolower(testChar1));
	printf("ft_tolower('%c') = '%c'\n", testChar2, ft_tolower(testChar2));
	printf("ft_tolower('%c') = '%c'\n", testChar3, ft_tolower(testChar3));
	printf("ft_tolower('%c') = '%c'\n", testChar4, ft_tolower(testChar4));
	printf("Using standard tolower for comparison:\n");
	printf("tolower('%c') = '%c'\n", testChar1, tolower(testChar1));
	printf("tolower('%c') = '%c'\n", testChar2, tolower(testChar2));
	printf("tolower('%c') = '%c'\n", testChar3, tolower(testChar3));
	printf("tolower('%c') = '%c'\n", testChar4, tolower(testChar4));
	return (0);
} */

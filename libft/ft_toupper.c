/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:28:47 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/24 14:10:35 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/* int	main(void)
{
	char testChar1 = 'a';
	char testChar2 = 'Z';
	char testChar3 = '5';
	char testChar4 = '#';
	printf("ft_toupper('%c') = '%c'\n", testChar1, ft_toupper(testChar1));
	printf("ft_toupper('%c') = '%c'\n", testChar2, ft_toupper(testChar2));
	printf("ft_toupper('%c') = '%c'\n", testChar3, ft_toupper(testChar3));
	printf("ft_toupper('%c') = '%c'\n", testChar4, ft_toupper(testChar4));
	printf("Using standard toupper for comparison:\n");
	printf("toupper('%c') = '%c'\n", testChar1, toupper(testChar1));
	printf("toupper('%c') = '%c'\n", testChar2, toupper(testChar2));
	printf("toupper('%c') = '%c'\n", testChar3, toupper(testChar3));
	printf("toupper('%c') = '%c'\n", testChar4, toupper(testChar4));
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:11:19 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/13 16:12:33 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}
/* int	main(void)
{
	char	testChar1;
	char	testChar2;
	char	testChar3;
	char	testChar4;

	testChar1 = 'A';
	testChar2 = 'z';
	testChar3 = '5';
	testChar4 = '#';
	printf("Is '%c' alphabetic? %d\n", testChar1, ft_isalpha(testChar1));
	printf("Is '%c' alphabetic? %d\n", testChar2, ft_isalpha(testChar2));
	printf("Is '%c' alphabetic? %d\n", testChar3, ft_isalpha(testChar3));
	printf("Is '%c' alphabetic? %d\n", testChar4, ft_isalpha(testChar4));
	printf("Using standard isalpha for comparison:\n");
	printf("Is '%c' alphabetic? %d\n", testChar1, isalpha(testChar1));
	printf("Is '%c' alphabetic? %d\n", testChar2, isalpha(testChar2));
	printf("Is '%c' alphabetic? %d\n", testChar3, isalpha(testChar3));
	printf("Is '%c' alphabetic? %d\n", testChar4, isalpha(testChar4));
	return (0);
}
 */
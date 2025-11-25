/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:13:49 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/21 15:07:35 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (8);
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
	printf("Is '%c' alphanumeric? %d\n", testChar1, ft_isalnum(testChar1));
	printf("Is '%c' alphanumeric? %d\n", testChar2, ft_isalnum(testChar2));
	printf("Is '%c' alphanumeric? %d\n", testChar3, ft_isalnum(testChar3));
	printf("Is '%c' alphanumeric? %d\n", testChar4, ft_isalnum(testChar4));
	printf("Using standard isalnum for comparison:\n");
	printf("Is '%c' alphanumeric? %d\n", testChar1, isalnum(testChar1));
	printf("Is '%c' alphanumeric? %d\n", testChar2, isalnum(testChar2));
	printf("Is '%c' alphanumeric? %d\n", testChar3, isalnum(testChar3));
	printf("Is '%c' alphanumeric? %d\n", testChar4, isalnum(testChar4));
	return (0);
} */

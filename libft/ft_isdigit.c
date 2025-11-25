/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:12:19 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/13 16:12:52 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}
/* int	main(void)
{
	char testChar1 = 'A';
	char testChar2 = '5';
	char testChar3 = 'z';
	char testChar4 = '#';

	printf("Is '%c' a digit? %d\n", testChar1, ft_isdigit(testChar1));
	printf("Is '%c' a digit? %d\n", testChar2, ft_isdigit(testChar2));
	printf("Is '%c' a digit? %d\n", testChar3, ft_isdigit(testChar3));
	printf("Is '%c' a digit? %d\n", testChar4, ft_isdigit(testChar4));

	printf("Using standard isdigit for comparison:\n");
	printf("Is '%c' a digit? %d\n", testChar1, isdigit(testChar1));
	printf("Is '%c' a digit? %d\n", testChar2, isdigit(testChar2));
	printf("Is '%c' a digit? %d\n", testChar3, isdigit(testChar3));
	printf("Is '%c' a digit? %d\n", testChar4, isdigit(testChar4));
	return (0);
} */
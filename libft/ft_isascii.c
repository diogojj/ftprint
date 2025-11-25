/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:15:38 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/24 14:11:19 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* int	main(void)
{
	char	testChar1;
	char	testChar2;
	char	testChar3;
	char	testChar4;

	testChar1 = 'A';
	testChar2 = 200;
	testChar3 = 127;
	testChar4 = -5;
	printf("Is '%c' an ASCII character? %d\n", testChar1,
		ft_isascii(testChar1));
	printf("Is '%d' an ASCII character? %d\n", testChar2,
		ft_isascii(testChar2));
	printf("Is '%d' an ASCII character? %d\n", testChar3,
		ft_isascii(testChar3));
	printf("Is '%d' an ASCII character? %d\n", testChar4,
		ft_isascii(testChar4));
	printf("Using standard isascii for comparison:\n");
	printf("Is '%c' an ASCII character? %d\n", testChar1, isascii(testChar1));
	printf("Is '%d' an ASCII character? %d\n", testChar2, isascii(testChar2));
	printf("Is '%d' an ASCII character? %d\n", testChar3, isascii(testChar3));
	printf("Is '%d' an ASCII character? %d\n", testChar4, isascii(testChar4));
	return (0);
}
 */

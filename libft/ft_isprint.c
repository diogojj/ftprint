/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:18:07 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 13:06:29 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* int	main(void)
{
	char testChar1 = 'A';
	char testChar2 = ' ';
	char testChar3 = '~';
	char testChar4 = '\n';

	printf("Is '%c' printable? %d\n", testChar1, ft_isprint(testChar1));
	printf("Is '%c' printable? %d\n", testChar2, ft_isprint(testChar2));
	printf("Is '%c' printable? %d\n", testChar3, ft_isprint(testChar3));
	printf("Is '\\n' printable? %d\n", ft_isprint(testChar4));

	printf("Using standard isprint for comparison:\n");
	printf("Is '%c' printable? %d\n", testChar1, isprint(testChar1));
	printf("Is '%c' printable? %d\n", testChar2, isprint(testChar2));
	printf("Is '%c' printable? %d\n", testChar3, isprint(testChar3));
	printf("Is '\\n' printable? %d\n", isprint(testChar4));
	return (0);
} */
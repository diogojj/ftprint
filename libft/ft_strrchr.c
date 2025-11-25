/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:52:11 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/18 12:44:58 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	cc;

	last = NULL;
	cc = (char)c;
	while (*s)
	{
		if (*(char *)s == cc)
			last = ((char *)s);
		s++;
	}
	if (*(char *)s == cc)
		return ((char *)s);
	return (last);
}
/* int	main(void)
{
	const char *str = "Hello, World!";
	char ch = 'o';
	char *result;
	char *result_std;
	result = ft_strrchr(str, ch);
	if (result)
		printf("Last occurrence of character '%c' found at position: %ld\n", ch,
			result - str);
	else
		printf("Character '%c' not found in the string.\n", ch);
	result_std = strrchr(str, ch);
	if (result_std)
		printf("Last occurrence of character '%c' found at position (std): %ld\n
			, ch, result_std - str);
	else
		printf("Character '%c' not found in the string (std).\n", ch);
	return (0);
} */
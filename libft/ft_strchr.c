/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:46:13 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/14 16:23:28 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
/* int	main(void)
{
	const char *str = "Hello, World!";
	char ch = 'e';
	char *result;
	result = ft_strchr(str, ch);
	if (result)
		printf("Character '%c' found at position: %ld\n", ch, result - str);
	else
		printf("Character '%c' not found in the string.\n", ch);
	return (0);
} */
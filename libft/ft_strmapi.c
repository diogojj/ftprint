/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:31:28 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/06 14:25:13 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char	my_function(unsigned int index, char c)
{
	return (c + index);
}
int	main(void)
{
	const char	*str = "abcdef";
	char		*new_str;
	int			i;

	new_str = ft_strmapi(str, my_function);
	if (new_str)
	{
		printf("Original string: %s\n", str);
		printf("Modified string: %s\n", new_str);
		free(new_str);
	}
	return (0);
}
 */
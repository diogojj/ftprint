/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:43:32 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/27 12:17:01 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	dup = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int	main(void)
{
	const char *original = "Hello, World!";
	char *duplicate;

	duplicate = ft_strdup(original);
	if (duplicate)
	{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
} */
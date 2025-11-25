/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:48:38 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/14 16:55:35 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/* void	my_function(unsigned int index, char *c)
{
	*c = *c + index;
}

int	main(void)
{
	char str[] = "Hello, World!";
	ft_striteri(str, my_function);
	printf("%s\n", str);

	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:30:28 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/13 15:28:18 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			sign;
	long long	result;
	size_t		i;

	sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/* int	main(void)
{
	const char *str1 = "   -12345abc";
	const char *str2 = "42 is the answer";
	const char *str3 = "   +9876543210xyz";
	const char *str4 = "2147483648";  // Overflow case
	const char *str5 = "-2147483649"; // Underflow case

	printf("ft_atoi('%s') = %d\n", str1, ft_atoi(str1));
	printf("ft_atoi('%s') = %d\n", str2, ft_atoi(str2));
	printf("ft_atoi('%s') = %d\n", str3, ft_atoi(str3));
	printf("ft_atoi('%s') = %d\n", str4, ft_atoi(str4));
	printf("ft_atoi('%s') = %d\n", str5, ft_atoi(str5));

	printf("Using standard atoi for comparison:\n");
	printf("atoi('%s') = %d\n", str1, atoi(str1));
	printf("atoi('%s') = %d\n", str2, atoi(str2));
	printf("atoi('%s') = %d\n", str3, atoi(str3));
	printf("atoi('%s') = %d\n", str4, atoi(str4));
	printf("atoi('%s') = %d\n", str5, atoi(str5));

	return (0);
} */
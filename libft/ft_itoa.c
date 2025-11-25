/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:40:17 by dide-jes          #+#    #+#             */
/*   Updated: 2025/10/28 14:56:23 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*pre_conv(int len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	nbr;
	int		len;

	len = ft_count_digits(n);
	nbr = n;
	str = pre_conv(len);
	if (!str)
		return (NULL);
	i = len - 1;
	if (n < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	str[len] = '\0';
	return (str);
}
/* int	main(void)
{
	int number1 = 12345;
	int number2 = -11224;
	int number3 = 0;
	printf("number1,%s\n", ft_itoa(number1));
	printf("number2,%s\n", ft_itoa(number2));
	printf("number3,%s\n", ft_itoa(number3));
} */
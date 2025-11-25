/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:04:54 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/17 13:54:17 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*word_splitter(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_words(char **words, int count)
{
	int	k;

	if (!words)
		return ;
	k = 0;
	while (k < count)
	{
		free(words[k]);
		k++;
	}
	free(words);
}

static char	**ft_split_helper(char **words, char *s, char c, int j)
{
	words[j] = word_splitter(s, c);
	if (!words[j])
	{
		free_words(words, j);
		return (NULL);
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**words;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!ft_split_helper(words, (char *)&s[i], c, j++))
				return (NULL);
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}

/* int	main(void)
{
	char	**result;
	char	*str;
	char	delimiter;

	str = "Hello,,World,,This,is,a,test";
	delimiter = ',';
	result = ft_split(str, delimiter);
	if (result)
	{
		for (int i = 0; result[i]; i++)
		{
			printf("Word %d: %s\n", i, result[i]);
			free(result[i]);
		}
		free(result);
	}
	return (0);
} */

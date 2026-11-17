/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/30 13:22:26 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/15 17:47:26 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_make_all_free(char **words_mat, int w)
{
	while (w >= 0)
	{
		free(words_mat[w]);
		w--;
	}
	free(words_mat);
	return (0);
}

static int	add_words_mat(char const *s, char separator,
	char	**words_mat, int words)
{
	int	i;
	int	w;
	int	word_starts;

	i = 0;
	w = 0;
	while (s[i] != '\0' && w < words)
	{
		while (s[i] == separator && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			word_starts = i;
			while (s[i] != separator && s[i] != '\0')
				i++;
			words_mat[w] = ft_substr(s, word_starts, (i - word_starts));
			if (!words_mat[w])
				return (ft_make_all_free(words_mat, w - 1));
			w++;
		}
	}
	words_mat[w] = NULL;
	return (1);
}

static int	count_words(char const *s, char separator)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[0] != separator && s[0] != '\0')
	{
		words++;
		i++;
	}
	while (s[i])
	{
		if (s[i] != separator && s[i - 1] == separator)
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		total_words;
	int		result;

	if (!s)
		return (NULL);
	total_words = count_words(s, c);
	words = malloc((total_words + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	result = add_words_mat(s, c, words, total_words);
	if (!result)
		return (NULL);
	return (words);
}
/*
int	main(void)
{
	char	**final_mat;
	char	*str;
	int		words;
	int		i;
	int		j;

	str = "This is 42";
	words = count_words(str, 's');
	final_mat = ft_split(str, 's');
	if (!final_mat)
		return (1);
	i = 0;
	while (final_mat[i] && i < words)
	{
		j = 0;
		while (final_mat[i][j])
		{
			printf("%c", final_mat[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	ft_make_all_free(final_mat, words - 1);
	return (0);
}*/

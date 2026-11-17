/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 13:26:00 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/11 11:51:59 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_get_string(int start, int finished,
	char const	*s1, char *str_trimmed)
{
	int	i;

	i = 0;
	while (start < finished)
	{
		str_trimmed[i] = s1[start];
		i++;
		start++;
	}
	str_trimmed[i] = '\0';
	return (str_trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trimmed;
	int		start;
	int		finished;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	finished = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (finished > start && ft_strchr(set, s1[finished - 1]))
		finished--;
	str_trimmed = malloc(sizeof(char) * ((finished - start) + 1));
	if (!str_trimmed)
		return (NULL);
	return (ft_get_string(start, finished, s1, str_trimmed));
}
/*
int	main(void)
{
	char	*str;

	str = ft_strtrim("NO_MATCH_INSIDE_THIS_STRING", "x");
	printf("%s", str);
	printf("%s", "\n");
	str = ft_strtrim("x xxx xx THIS IS ANOTHER TEST FOR 42x xx xx x", " x");
	printf("%s", str);
	printf("%s", "\n");
	free(str);
	return (0);
}*/

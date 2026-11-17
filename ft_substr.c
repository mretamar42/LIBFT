/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/28 15:40:10 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/10 18:17:00 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_get_substr(size_t casted_start, size_t len,
	char const *s, char *substr)
{
	size_t	i;

	i = 0;
	while (i < len && s[casted_start] != '\0')
	{
		substr[i] = s[casted_start];
		i++;
		casted_start++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	casted_start;
	size_t	str_len;

	casted_start = (size_t) start;
	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (casted_start >= str_len)
	{
		substr = (char *) malloc(1 * sizeof(char));
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > str_len - casted_start)
		len = str_len - casted_start;
	substr = (char *) malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	return (ft_get_substr(casted_start, len, s, substr));
}
/*
int	main(void)
{
	char	*str = "42MALAGA_LIBFT";
	char	*result;

	result = ft_substr(str, 2, 8);
	printf("%s", result);
	printf("\n");
	free(result);
	return (0);
}*/

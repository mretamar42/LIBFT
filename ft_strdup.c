/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/28 12:52:52 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/10 15:53:35 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size_str;
	char	*dest;
	int		i;

	size_str = ft_strlen(s);
	i = 0;
	dest = (char *) malloc((size_str + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	const char *str = "42MALAGA";
	char *test = ft_strdup(str);
	printf("%p",test);
	free(test);
	return (0);
}*/

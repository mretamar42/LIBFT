/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/28 17:12:24 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/11 19:06:58 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_s1;
	int		size_s2;
	char	*final_str;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	final_str = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!final_str)
		return (NULL);
	ft_memmove(final_str, s1, size_s1);
	final_str[size_s1] = '\0';
	ft_strlcat(final_str, s2, (size_s1 + size_s2 + 1));
	return (final_str);
}
/*
int	main(void)
{
	char	*str;

	str = ft_strjoin("42", "MALAGA");
	printf("%s", str);
	printf("%s", "\n");
	free(str);
	return (0);
}*/

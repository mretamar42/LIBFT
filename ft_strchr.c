/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/23 15:10:48 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/10 13:54:57 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	casted;

	casted = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == casted)
			return ((char *) &s[i]);
		i++;
	}
	if (casted == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*
int main(void)
{
	printf("%s",ft_strchr("42MALAGA", 'L'));
	return (0);
}*/

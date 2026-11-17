/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 10:47:37 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/10 14:53:51 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little || little[0] == '\0')
		return ((char *) big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && (i + j) < len)
			j++;
		if (j == ((ft_strlen(little))))
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s", ft_strnstr("Testing42", "st", 4));
	printf("%s", "\n");
	printf("%s", ft_strnstr("Testing42", "in", 10));
	printf("%s", "\n");
	return (0);
}*/

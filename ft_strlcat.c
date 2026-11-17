/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/25 15:18:50 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/10 12:38:14 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	i = 0;
	dst_size = 0;
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	dst_size = ft_strlen(dst);
	if (size <= dst_size)
		return (src_size + size);
	while (src[i] && (dst_size + i) < size - 1)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (src_size + dst_size);
}
/*
int	main(void)
{
	char		test1[20] = "42MALAGA";
	const char	test2[20] = "HELLO!";

	printf("%ld", ft_strlcat(test1, test2, 14));
	return (0);
}*/

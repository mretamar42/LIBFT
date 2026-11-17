/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 13:54:23 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/10 13:29:13 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	ch;
	size_t			i;

	src = (unsigned char *) s;
	ch = (unsigned char) c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i <= (n - 1))
	{
		if (src[i] == ch)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	test[30] = "42MALAGA";

	printf("%p", ft_memchr(test, 'A', 10));
	printf("\n");
}*/

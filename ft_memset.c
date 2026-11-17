/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 14:43:44 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/11 01:57:36 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char test1[] = "HELLO";
	char *pointer = test1;
	char *result;
	int c;

	c = 'a';
	result = ft_memset(pointer, c, 5);
	printf("%s", result);
	return(0);
}*/

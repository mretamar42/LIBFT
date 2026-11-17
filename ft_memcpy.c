/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 15:40:57 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/04 02:03:10 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*stri;
	char			*strd;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	stri = (const char *) src;
	strd = (char *) dest;
	i = 0;
	while (i < n)
	{
		strd[i] = stri[i];
		i++;
	}
	return (strd);
}
/*
int main()
{
	char *test1;
	char *test2[4];
	char *result;

	test1 = "LIBFT_MRETAMAR";
	test2[4] = "42MALAGA";
	result = ft_memcpy(test2,test1,10);
	printf("%p", result);
	return(0);
}*/

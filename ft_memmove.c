/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 17:33:49 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/04 02:03:13 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cpstring_forward(char *strd, const char *strs, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (strd);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*strs;
	char		*strd;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	strs = (const char *) src;
	strd = (char *) dest;
	if (strd > strs)
	{
		i = n;
		while (i > 0)
		{
			strd[i - 1] = strs[i - 1];
			i--;
		}
	}
	else
	{
		ft_cpstring_forward(strd, strs, n);
	}
	return (strd);
}
/*
int	main(void)
{
	char	src[14] = "LibftMretamar";
	char	dest[14] = "42Malaga";
	char	*result1;
	char	*result2;

	result1 = (char *) ft_memmove(dest, src, 10);
	result2 = (char *) memmove(dest, src, 10);
	printf("%s", result1);
	printf("%s", "\n");
	printf("%s", result2);
}*/

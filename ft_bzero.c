/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_bzero.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 14:56:36 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/08 12:22:01 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int main(void)
{
	char test[20] = "42MALAGA_LIBFT"; 
	ft_bzero(test, 10);
	printf("%s", test);
	return (0);
}*/

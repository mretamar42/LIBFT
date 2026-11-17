/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalnum.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 13:55:38 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/04 02:02:26 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int v)
{
	if (ft_isalpha(v) == 1 || ft_isdigit(v) == 1)
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d",ft_isalnum('9'));
	return (0);
}*/

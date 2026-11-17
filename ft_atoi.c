/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 14:15:14 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/08 10:24:58 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	final_num;

	i = 0;
	sign = 1;
	final_num = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		final_num = (final_num * 10) + (nptr[i] - '0');
		i++;
	}
	return (final_num * sign);
}
/*
int	main(void)
{
	char	test[10] = "-123";

	printf("%d", ft_atoi(test));
	return (0);
}*/

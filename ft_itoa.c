/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 14:47:18 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/11 18:32:55 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_size(long n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	new_n;
	int		size;
	char	*str;

	new_n = (long) n;
	size = ft_count_size(new_n);
	str = (char *) malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (new_n < 0)
	{
		str[0] = '-';
		new_n = new_n * (-1);
	}
	if (new_n == 0)
		str[0] = '0';
	while (new_n > 0)
	{
		str[size - 1] = new_n % 10 + '0';
		new_n = new_n / 10;
		size--;
	}
	return (str);
}
/*
int	main(void)
{
	char	*test = ft_itoa(-43214242);

	printf("%s", test);
	printf("\n");
	free(test);
	return (0);
}*/

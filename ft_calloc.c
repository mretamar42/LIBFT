/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/28 10:45:56 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/11 23:19:07 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			max_size;
	size_t			i;

	max_size = (size_t) - 1;
	i = 0;
	if (nmemb != 0 && size > max_size / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < (nmemb * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	size_t	max_size;
	void	*zero_ptr;
	void	*overflow;

	max_size = (size_t) - 1;
	zero_ptr = ft_calloc(5, 10);
	
	printf("Case 1 -> Succeded!%p", zero_ptr);
	printf("\n");
	printf("Case 2 -> Overflow, ");
	overflow = ft_calloc(max_size, 1);
	if (overflow == NULL)
		printf("Game over");
	else
		printf("You're good to go");
	printf("\n");
	free(zero_ptr);
	free(overflow);
	return (0);
}*/

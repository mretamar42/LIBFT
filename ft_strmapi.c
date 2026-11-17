/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 18:35:08 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/11 18:23:27 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_dot_even(unsigned int index, char charac)
{
	if (index % 2 == 0)
		return ('.');
	return (charac);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	char	*new_str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	new_str = (char *) malloc((size + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	char	test_str[] = "riceandseafood";
	char	*new_str;

	new_str = ft_strmapi(test_str, ft_dot_even);
	if (!new_str)
	return (1);
	int	i;

	i = 0;
	while (new_str[i])
	{
		printf("%c", new_str[i]);
		i++;
	}
	printf("\n");
	free(new_str);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/23 17:58:09 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/10 14:11:26 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		lenght_s;
	char	casted_c;

	casted_c = (char) c;
	lenght_s = ft_strlen(s);
	while (lenght_s >= 0)
	{
		if (s[lenght_s] == casted_c)
		{
			return ((char *) &s[lenght_s]);
		}
		lenght_s--;
	}
	return (NULL);
}
/*
int	main(void)
{
	ft_strrchr("24MALAGA", '\0');
	return (0);
}*/

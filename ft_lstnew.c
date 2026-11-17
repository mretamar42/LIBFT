/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/04 15:18:07 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 22:42:17 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first_node;

	first_node = (t_list *) malloc(sizeof(t_list));
	if (!first_node)
		return (NULL);
	first_node->content = content;
	first_node->next = NULL;
	return (first_node);
}
/*
int	main(void)
{
	t_list	*test_node;
	int		number;

	number = 5;
	test_node = ft_lstnew((&number));
	if (!test_node)
	return (1);
	printf("%d", *(int *)(test_node->content));
	printf("\n");
	free(test_node);
	return (0);
}*/

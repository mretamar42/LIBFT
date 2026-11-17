/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 11:52:05 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 22:52:22 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
/*
int	main(void)
{
	t_list	*test_node;
	t_list	*current;
	t_list	*next_node;
	t_list *last_node;

	test_node = ft_lstnew("one");
	test_node->next = ft_lstnew("two");
	test_node->next->next = ft_lstnew("three");
	test_node->next->next->next = ft_lstnew("four");
	last_node = ft_lstlast(test_node);
	printf("%s\n", (char *) last_node->content);
	current = test_node;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	return (0);
}*/

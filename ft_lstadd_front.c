/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_front.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/04 15:48:24 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 22:45:08 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*test_node;
	t_list	*nu_node;
	t_list	*current;
	t_list	*next_node;

	test_node = ft_lstnew("one");
	test_node->next = ft_lstnew("two");
	test_node->next->next = ft_lstnew("three");
	nu_node = ft_lstnew("new_one");
	ft_lstadd_front(&test_node, nu_node);
	current = test_node;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	return (0);
}*/
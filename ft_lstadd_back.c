/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:00:35 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 18:46:44 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list	*test_list;
	t_list	*test_node;
	t_list	*new_node;
	t_list	*current;
	t_list	*next_node;

	test_node = ft_lstnew("first");
	test_list = test_node;
	test_node->next = ft_lstnew("second");
	new_node = ft_lstnew("third");
	ft_lstadd_back(&test_list, new_node);
	printf("%s\n", (char *) test_node->next->next->content);
	current = test_list;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	return (0);
}*/

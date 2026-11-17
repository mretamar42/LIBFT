/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 11:35:12 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 18:52:18 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*current;
	unsigned int	i;

	current = lst;
	i = 0;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*test_node;
	t_list	*current;
	t_list	*next_node;
	unsigned int size;

	test_node = ft_lstnew("alfa");
	test_node->next = ft_lstnew("beta");
	test_node->next->next = ft_lstnew("gamma");
	size = ft_lstsize(test_node);
	printf("The size list of the nodes is:%u ", size);
	printf("\n");
	current = test_node;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	return (0);
}*/

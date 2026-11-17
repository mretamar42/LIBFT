/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:20:49 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 22:58:44 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	ft_delete_content(void *content)
{
	printf("Deleting Content %s\n", (char *) content);
	free(content);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
/*
int	main(void)
{
	t_list	*test_node;

	test_node = ft_lstnew(ft_strdup("alfa"));
	test_node->next = ft_lstnew(ft_strdup("beta"));
	test_node->next->next = ft_lstnew(ft_strdup("gamma"));
	ft_lstclear(&test_node, ft_delete_content);

	return (0);
}*/

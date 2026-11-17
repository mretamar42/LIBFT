/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 13:13:52 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 18:34:19 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	ft_delete_content(void *content)
{
	if (!content)
		return ;
	printf("Deleting content: %s\n", (char *) content);
	free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
int	main(void)
{
	t_list	*test_node;
	t_list	*tmp_to_delete;

	test_node = ft_lstnew(ft_strdup("alfa"));
	test_node->next = ft_lstnew(ft_strdup("beta"));
	test_node->next->next = ft_lstnew(ft_strdup("gamma"));
	
	printf("%s\n", (char *) test_node->next->next->content);
	
	tmp_to_delete = test_node->next->next;
	
	test_node->next->next = NULL;
	
	ft_lstdelone(tmp_to_delete, ft_delete_content);
	if (test_node->next->next == NULL)
		printf("%s\n", "beta points to NULL, gamma has been deleted");
	ft_lstclear(&test_node, ft_delete_content);
	return (0);
}*/

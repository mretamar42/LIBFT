/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 15:42:08 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 23:07:57 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static void	ft_delete_content(void *content)
{
	if (!content)
		return ;
	printf("Deleting content %s\n", (char *) content);
	free(content);
}

static void	*ft_to_lowercase(void *content)
{
	char	*new_str;
	int		i;

	i = 0;
	if (!content)
		return (NULL);
	new_str = ft_strdup((char *) content);
	if (!new_str)
		return (NULL);	
	while (new_str[i])
	{
		if (new_str[i] >= 'A' && new_str[i] <= 'Z')
		new_str[i] = new_str[i] + 32;
		i++;
	}
	printf("%s", new_str);
	printf("\n");
	return ((void *) new_str);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nu_list;
	t_list	*nu_node_tmp;
	void	*content;

	if (!lst || !f)
		return (NULL);
	nu_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		nu_node_tmp = ft_lstnew(content);
		if (!nu_node_tmp)
		{
			if (del)
				del(content);
			ft_lstclear(&nu_list, del);
			return (NULL);
		}
		ft_lstadd_back(&nu_list, nu_node_tmp);
		lst = lst->next;
	}
	return (nu_list);
}

/*
int	main(void)
{
	t_list	*test_node;
	t_list  *new_list;

	test_node = ft_lstnew(ft_strdup("ONE"));
	test_node->next = ft_lstnew(ft_strdup("TWO"));
	test_node->next->next = ft_lstnew(ft_strdup("THREE"));

	new_list = ft_lstmap(test_node, ft_to_lowercase, ft_delete_content);

	ft_lstclear(&test_node, ft_delete_content);
	ft_lstclear(&new_list, ft_delete_content);
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstiter.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mretamar <mretamar@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 15:15:49 by mretamar         #+#    #+#              */
/*   Updated: 2026/10/12 18:22:22 by mretamar        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static void	ft_delete_content(void *content)
{
	if (!content)
		return ;
	printf("Deleting content%s\n", (char *) content);
	free(content);
}

static void	ft_to_uppercase(void *content)
{
	char	*str;
	int		i;

	if (!content)
		return ;
	str = (char *) content;
	i = 0;
	while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
			i++;
		}
	printf("%s", str);
	printf("\n");
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
/*
int	main(void)
{
	t_list	*test_node;

	test_node = ft_lstnew(ft_strdup("one"));
	test_node->next = ft_lstnew(ft_strdup("two"));
	test_node->next->next = ft_lstnew(ft_strdup("three"));
	ft_lstiter(test_node, ft_to_uppercase);
	ft_lstclear(&test_node, ft_delete_content);
	return (0);
}*/

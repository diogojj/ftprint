/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:01:51 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/10 15:18:14 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	current = *lst;
	while (current)
	{
		next_node = current->next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	*lst = NULL;
}
/*
void	del_function(void *content)
{
	printf("Deleting content: %s\n", (char *)content);
	content = NULL;
}
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = malloc(sizeof(t_list));
	node1->content = "Node 1";
	node1->next = NULL;
	ft_lstadd_back(&head, node1);

	node2 = malloc(sizeof(t_list));
	node2->content = "Node 2";
	node2->next = NULL;
	ft_lstadd_back(&head, node2);

	node3 = malloc(sizeof(t_list));
	node3->content = "Node 3";
	node3->next = NULL;
	ft_lstadd_back(&head, node3);

	ft_lstclear(&head, del_function);
	return (0);
} */
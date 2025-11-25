/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:18:04 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 13:29:25 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

/* void	print_content(void *content)
{
	printf("Node content: %s\n", (char *)content);
}

void delete_content(void *content)
{
	content = NULL;
} */
/* int	main(void)
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

	ft_lstiter(head, print_content);

	// Free the list
	ft_lstclear(&head, delete_content);
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:59:35 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/10 15:18:18 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

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
	t_list	*head = NULL;
	t_list	*new_node1;
	t_list	*new_node2;

	new_node1 = malloc(sizeof(t_list));
	new_node1->content = "First Node";
	new_node1->next = NULL;

	new_node2 = malloc(sizeof(t_list));
	new_node2->content = "Second Node";
	new_node2->next = NULL;

	ft_lstadd_back(&head, new_node1);
	ft_lstadd_back(&head, new_node2);

	t_list	*current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	free(new_node1);
	free(new_node2);

	return (0);
} */
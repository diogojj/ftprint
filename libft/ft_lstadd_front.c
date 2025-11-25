/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:43:15 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 13:23:08 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*  int	main(void)
{
	t_list *head = NULL;
	t_list *new_node;
	int value1 = 42;
	int value2 = 84;

	new_node = ft_lstnew(&value1);
	ft_lstadd_front(&head, new_node);
	new_node = ft_lstnew(&value2);
	ft_lstadd_front(&head, new_node);

	t_list *current = head;
	while (current)
	{
		printf("Node content: %d\n", *(int *)(current->content));
		current = current->next;
	}

	// Free the list
	while (head)
	{
		t_list *temp = head;
		head = head->next;
		free(temp);
	}

	return (0);
} */
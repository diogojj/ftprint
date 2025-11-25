/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:14:32 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/06 17:15:18 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->content = "First";
	node1->next = node2;
	node2->content = "Second";
	node2->next = node3;
	node3->content = "Third";
	node3->next = NULL;

	last = ft_lstlast(node1);
	if (last)
		printf("Last node content: %s\n", (char *)last->content);
	else
		printf("The list is empty.\n");

	free(node1);
	free(node2);
	free(node3);

	return (0);
} */
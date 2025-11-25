/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:12:16 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/06 17:15:52 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		size;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->content = "First";
	node1->next = node2;
	node2->content = "Second";
	node2->next = node3;
	node3->content = "Third";
	node3->next = NULL;

	size = ft_lstsize(node1);
	printf("List size: %d\n", size);

	free(node1);
	free(node2);
	free(node3);

	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:22:23 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/10 15:18:12 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/* void	del_function(void *content)
{
	printf("Deleting content: %s\n", (char *)content);
	content = NULL;
}

int	main(void)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->content = "Sample Content";
	node->next = NULL;
	ft_lstdelone(node, del_function);
	return (0);
}
 */
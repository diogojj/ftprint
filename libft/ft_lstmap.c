/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:18:01 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 13:29:44 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*current;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	current = lst;
	while (current)
	{
		new_content = f(current->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		current = current->next;
	}
	return (new_list);
}

/* void	*shift_one(void *content)
{
	char	*str = (char *)content;
	size_t	len = strlen(str);
	char	*shifted = malloc(len + 1);
	if (!shifted)
		return (NULL);
	for (size_t i = 0; i < len; i++)
		shifted[i] = str[i] + 1;
	shifted[len] = '\0';
	return (shifted);
}

void	delete_content(void *content)
{
	content = NULL;
}
int	main(void)
{
	t_list	*original_list = NULL;
	t_list	*mapped_list;
	t_list	*current;

	ft_lstadd_back(&original_list, ft_lstnew("Node 1"));
	ft_lstadd_back(&original_list, ft_lstnew("Node 2"));
	ft_lstadd_back(&original_list, ft_lstnew("Node 3"));

	mapped_list = ft_lstmap(original_list, shift_one, delete_content);

	printf("Mapped list contents:\n");
	current = mapped_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&original_list, delete_content);
	ft_lstclear(&mapped_list, delete_content);
	return (0);
} */
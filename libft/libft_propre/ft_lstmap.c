/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <casomarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:19:23 by casomarr          #+#    #+#             */
/*   Updated: 2022/12/01 14:35:58 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_content;

	if (lst == NULL, f == NULL, del == NULL)
		return (NULL);
	new_list = 0;
	while (lst->next)
	{
		new_content = ft_lstnew(f(lst -> content));
		if (new_content == NULL)
		{
			ft_lstclear(&new_content, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_content);
		lst = lst -> next;
	}
	return (new_list);
}

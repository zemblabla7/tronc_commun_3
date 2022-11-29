/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <casomarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:19:19 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/29 15:55:49 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;

	if ((*lst) == NULL || del == NULL)
		return ;
	else
	{
		while ((*lst)->next)
		{
			temp = (*lst)->next;
			ft_lstdelone((*lst), del);
			(*lst) = temp;
		}
	}
}

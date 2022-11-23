/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:18:58 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 17:55:59 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	long unsigned int	i;
	char				temp;

	i = 0;
	while (i < n)
	{
		temp = ((char *)(src))[i];
		((char *)dest)[i] = temp;
		i++;
	}
	return ((void *)dest);
}

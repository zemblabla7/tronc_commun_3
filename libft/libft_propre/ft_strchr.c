/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:21:01 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 16:56:05 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	while (s[i])
	{
		i++;
	}
	if (c == '\0')
	{
		temp = &((char *)s)[i + 1];
		return (temp);
	}
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] != '\0')
	{
		temp = &((char *)s)[i];
		return (temp);
	}
	else
		return (NULL);
}

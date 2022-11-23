/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:56 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/23 15:39:42 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*new_str;

	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i <= len && s[start] != '\0')
		new_str[i++] = ((char *)s)[start++];
	new_str[i] = '\0';
	return (new_str);
}

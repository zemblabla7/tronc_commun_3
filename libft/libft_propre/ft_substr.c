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
	size_t		size;
	char		*new_str;

	if (len < 0 || s == NULL)
		return (NULL);
	size = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		new_str = malloc(sizeof(char) * 1);
		if (!new_str)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	new_str = malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		new_str[i++] = ((char *)s)[start++];
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
int main()
{
	char *str = "lorem ipsum dolor sit amet";
	printf("%s", ft_substr(str, 400, 20));

	return 0;
}
*/

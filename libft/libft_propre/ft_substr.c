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

	size = ft_strlen(s) - start;
	if (size <= len)
		new_str = malloc(sizeof(char) * size + 1);
	else
		new_str = malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	//start = start - 1; // car entre crochets c est 1 de moins
	while (i <= len && s[start] != '\0')
		new_str[i++] = ((char *)s)[start++];
	new_str[i] = '\0';
	return (new_str);
}

/*
// JE RENDS UNE LETTRE EN TROP! VOIR COMMENTAIRE DANS MON CODE
int main()
{
	char *str = "lorem ipsum dolor sit amet";
	printf("%s", ft_substr(str, 0, 10));

	return 0;
}
*/

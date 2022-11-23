/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:31:04 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/15 14:31:07 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * strlen(s) + 1);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	return (&dest[0]);
}


#include <stdio.h>

int main ()
{
	char src[] = "hola carolina";

	printf("%ld\n", strlen(src));
	printf("Ma fonction : %s\n", ft_strdup(src));
	printf("Vraie fonction : %s\n", strdup(src));

	return (0);
}


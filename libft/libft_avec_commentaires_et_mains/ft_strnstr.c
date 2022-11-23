/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:32:27 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/15 12:32:29 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (((char *)big)); // vient de piscine, verifier si dans la vrai fonction vrai aussi
	if (big[0] == '\0')
		return (NULL);
	while ((i + j) <= len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return (&((char *)big)[i]);
        i++;
	}
	return (0);
}


//#include <string.h>

int main ()
{
    char str[] = "me gusta comer tengo hambre";
	char str2[] = "me gusta comer tengo hambre";
	char to_find[] = "";
	char to_find2[] = "";
    int n = 20;

    //printf("ma fonction : %s\n", (char *)ft_strnstr(str, to_find, n));
    //printf("vraie fonction : %s\n", (char *)strnstr(str2, to_find2, n));

	printf("ma fonction : %s\n", ft_strnstr(str, to_find, n));
	printf("vraie fonction : %s\n", strnstr(str2, to_find2, n));

    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:16:10 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/23 16:07:40 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	ft_strlen_total;
	char	*new_str;

	ft_strlen_total = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc((sizeof(char)) * (ft_strlen_total + 1));
	if (new_str == NULL /*|| s1 == NULL || s2 == NULL*/)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}

/*
int main()
{
    char s1[] = "lorem ipsum";
    char s2[] = "";

    printf("Ma fonction : %s\n", (char *)ft_strjoin(s1, s2));
    //printf("Vraie fonction : %p", strjoin(s1, s2)); // pas exactement comme la vraie fonction car ici on a un *char et non un **char donc on ne test qu'avec un seul mot dans str1 et str2.

return(0);
}
*/
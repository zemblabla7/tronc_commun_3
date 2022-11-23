/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:56 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 14:15:00 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;

    char *new_str = malloc(sizeof(char) * len);

    if (new_str == NULL) //  = si malloc a echoue
        return(NULL);
    i = 0;
    while (i <= len && s[start] != '\0')
        new_str[i++] = ((char *)s)[start++];
    new_str[i] = '\0';

    return(new_str);
    //free(new_str);
}

/*
int main ()
{
    char str[] = "mon llopet est parti";
    int start = 4;
    size_t len = 6;

    printf("Ma fonction : %p", ft_substr(str, start, len));
    printf("Vraie fonction : %d", substr(str, start, len));

    return (0);
}
*/

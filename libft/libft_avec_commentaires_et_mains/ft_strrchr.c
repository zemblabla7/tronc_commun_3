/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:18:59 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/10 14:19:01 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char *temp;

    i = 0;

// ---------------------------------
// cas ou c = '\0'
    while (s[i])
        i++;

    if (c == '\0')
        {
            temp = &((char *)s)[i + 1];
            return(temp);
        }
// ---------------------------------
// cas ou c = lettre dans s
    while (i > 0)
    {
        if (s[i] == c)
        {
                temp = &((char *)s)[i];
                return(temp);
        }
        i--;
    }
// ---------------------------------
// cas ou c = lettre pas dans s
    return(NULL);
}

/**
#include <string.h>
#include <stdio.h>

int main ()
{
    const char str[] = "mama";
    //char c = 'a'; // marche
    //char c = 'f'; // marche
    //char c = '\0'; // marche

    printf("%p\n", ft_strrchr(str, c));
    printf("%p\n", strrchr(str, c)); 

    return (0);
}
*/
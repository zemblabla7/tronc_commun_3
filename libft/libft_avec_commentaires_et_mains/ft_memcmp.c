/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:47:37 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/09 17:47:39 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// NE MARCHE PAS

#include "libft.h"
//#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return(0);
    while ((((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]) && i < n)
        i++;
    if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
        return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
    //if (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i == n)
    else
        return (0);
}

/* unsigned char : ca va boucler. Donc au lieu de comparer -1 avec 0, 
on compare 255 (qui est le max des char) avec 0, donc ca ne donnera pas 
les memes comparaisons puisque -1 est < a 0 alors que 255 est > a 0. */

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char str1[] = "menjar";
    char str2[] = "menhir";
    //size_t n = 1; // pour n = 0 et n = 1 : moi = 0 (vrai) / vraie fx = 0 (vrai))
    size_t n = 3; // pour n = 2 et n = 3 : moi = 2 (faux) /vraie fx = 0 (vrai)
    //size_t n = 4; // moi : 2 (faux) / vraie fx : 4 (faux) 
    //size_t n = 5; // moi : 2 (faux) / vraie fx : 5 (faux) 
    //size_t n = 6; // moi : 2 (faux) / vraie fx : 6 (faux) (overflow)

    ft_memcmp(str1, str2, n);
    printf("Ma fonction : %d\n", ft_memcmp(str1, str2, n));
    printf("Ma fonction str1 : %s\n", str1);
    printf("Ma fonction str2 : %s\n", str2);

    memcmp(str1, str2, n);
    printf("Vraie fonction : %d\n", memcmp(str1, str2, n));
    printf("Vraie fonction str1 : %s\n", str1);
    printf("Vraie fonction str2 :%s\n", str2); 

    return(0);
}
*/
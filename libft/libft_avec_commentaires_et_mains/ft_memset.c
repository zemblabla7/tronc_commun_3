/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:31:43 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/08 13:31:44 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <stddef.h>

// il faut mettre une * avant ft_memset? car ca ne marche pas du coup
// comme str1 et str2 sont void, est-ce que je devrais mettre mon code dans des if du genre if entre a et z alors str1 et str2 sont de type char, etc?

void *ft_memset(void *s, char c, size_t n)
{
    long unsigned int i;
    i = 0;

    while (i < n)
    {
        ((char *)s)[i] = c;
        i++;
    }
    return(s);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main ()
{
    char str[] = "mandarine pomme banane prune";

    memset(str, '.', 10);
    printf("%s\n", str);
    //memset(str + 5, '.', 10);
    //printf("%s\n", str);

    
    ft_memset(str, '.', 10);
    printf("%s\n", str);

    return (0);
}
*/
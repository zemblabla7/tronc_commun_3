/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:38:49 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/08 16:38:50 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    // soit long unsigned int soit direct size_t mais alors rajouter #include <stddef.h>
    long unsigned int i;

    i = 0;

    while (i < n)
    {
        /*essayer (necessaire pour memset aussi, sinon je pense que erreur) d'ecrire quelque 
        chose du genre *(dest)[i] = *(src)[i] car en specifiant char ce n est plus vraiment correcte, 
        on pourrait mettre que des int aussi */
        
        ((char *)dest)[i] = ((char *)(src))[i];
        i++;
    }

    return(dest);
}

/*
#include <string.h>
#include <stdio.h>

int main () 
{
    char src[] = "ccccc";
    char dest[] = "dd";

    //ft_memcpy(dest, src, 5);
    memcpy(dest, src, 5);
    printf("%s\n", dest);

    return (0);
}
*/
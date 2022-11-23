/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:32:15 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/15 12:32:17 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((char *)s)[i] == c) // je pense que pas besoin de forcer le type de s, il depend de ce qu'on lui donne dans le main
        {
            return (&((char *)s)[i]); // on return qq chose alors que type de fonction void car cette fonction est un pointeur sur fonction
        }
        i++;
    }
    return (NULL);
}


/* La fonction memchr() examine les n premiers octets de la zone mémoire pointée
par s à la recherche du caractère c. Le premier octet correspondant à c
(interprété comme un unsigned char) arrête l'opération. */


/*
int main ()
{
    char str[] = "carolina";
    unsigned char c = 'a';
    size_t n = 3;

    printf("ma fonction : %s\n", (char *)ft_memchr(str, c, n)); 
    printf("vraie fonction : %s\n", (char *)memchr(str, c, n));

    return (0);
}

*/

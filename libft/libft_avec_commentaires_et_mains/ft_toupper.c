/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:00:38 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/09 14:00:40 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <ctype.h>

int ft_toupper (int c)
{
    unsigned char converter;

    if ( c >= 'a' && c <= 'z')
    {
        converter = c - 32;
        return (converter);
    }
    else
        return (c);
}

/*
renvoie une majuscule si minuscule. 
Si l'equivalent en majuscule n'existe pas, il renvoie la minuscule en input.
Behaviour of the function undefined if c isn't an unsigned char.
prototype : sur man : int toupper (int c) mais parle de unsigned char alors je ne ais pas...
*/ 

/*
#include <stdio.h>

int main ()
{
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_toupper('A'));
    //printf("%c", ft_toupper('á'));

    printf("%c\n", toupper('a'));
    printf("%c\n", toupper('A'));
    //printf("%c", toupper('á')); // la fonction originale et la mienne beuguent les deux mais ont pas le meme message d'erreur

    return(0);
}
*/
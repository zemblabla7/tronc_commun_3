/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:17:45 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/09 14:17:47 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <ctype.h>

int ft_tolower (int c)
{
    unsigned char converter;

    if ( c >= 'A' && c <= 'Z')
    {
        converter = c + 32;
        return (converter);
    }
    else
        return (c);
}

/*
#include <stdio.h>

int main ()
{
    printf("%c\n", ft_tolower('A'));
    printf("%c\n", ft_tolower('a'));
    //printf("%c", ft_tolower('á'));

    printf("%c\n", tolower('A'));
    printf("%c\n", tolower('a'));
    //printf("%c", tolower('á')); // la fonction originale et la mienne beuguent les deux mais ont pas le meme message d'erreur

    return(0);
}
*/
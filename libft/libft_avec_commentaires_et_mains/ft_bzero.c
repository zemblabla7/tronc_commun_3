/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:09:40 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/08 15:09:43 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <stddef.h>

void ft_bzero (void *s, size_t n)
{
    int i;

    i = 0;
    // "<n" et non "<=n" a cause du nulle byte
    while (i < n)
    {
        ((char *)s)[i] = 0;
        i++;
    }
}

/*
#include <strings.h>
#include <stdio.h>

int main () 
{
    int i;
    i = 0;

    char str[6] = "pomme";
    //bzero(str, 2);
    ft_bzero(str, 2);

    //je peux changer 6 par ft_strlen

    while (i < 6)
    {
        printf("%c\n", str[i]);
        i++;
    }

    return (0);
}
*/
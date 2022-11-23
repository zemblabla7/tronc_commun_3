/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:18:18 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/08 13:18:20 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1); // la vraie fonction return 8 mais le man dit juste de rendre autre chose que 0
    else
        return(0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = '5'; // c est un int dans le prototype et on peut lui donner un char dans le main?
    printf("%d\n", ft_isalnum(c));
    printf("%d\n", isalnum(c));

    return (0);
}
*/
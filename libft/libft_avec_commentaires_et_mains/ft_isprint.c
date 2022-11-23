/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:24:47 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/08 13:24:48 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isprint(int c)
{
    if (c > 32 && c < 126)
        return (1);
    else
        return(0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%d\n", ft_isprint(35));
    printf("%d\n", isprint(35));
    return (0);
}
*/
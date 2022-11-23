/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:22:11 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/08 13:22:13 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isascii(int c)
{
    if (c > 0 && c < 127)
        return (1);
    else
        return(0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%d\n", ft_isascii(128));
    printf("%d\n", isascii(128));
    return (0);
}
*/
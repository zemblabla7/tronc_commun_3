/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:20 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/08 13:17:23 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isdigit(int c)
{
    if (c > '0' && c < '9')
        return (1);
    else
        return(0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%d\n", ft_isdigit('l'));
    printf("%d\n", isdigit('l'));
    return (0);
}
*/
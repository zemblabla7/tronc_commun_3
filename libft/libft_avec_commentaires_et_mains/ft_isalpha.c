/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:07:19 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/07 15:07:26 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalpha(int c)
{
    if ((c > 'A' && c < 'Z') || (c > 'a' && c < 'z'))
        return (1);
    else
        return(0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%d\n", ft_isalpha('+'));
    printf("%d\n", isalpha('+'));
    return (0);
}
*/
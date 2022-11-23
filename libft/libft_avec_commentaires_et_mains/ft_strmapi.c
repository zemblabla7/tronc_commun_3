/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:22:00 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 14:22:02 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ca sert a rien de faire un main a moins de vouloir m amuser a creer une fonction f...

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *newstr;

    newstr = malloc(sizeof(char) * strlen(s));
    if (newstr == NULL)
        return (NULL);
    i = 0;
    while(s[i])
    {
        newstr = f(i, s[i]);
        i++;
    }
    newstr[i] = '\0';
    //free (newstr) ??
    return(newstr);
}



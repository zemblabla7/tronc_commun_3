/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:21:01 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 16:56:05 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    if (c == 0)
    {
        while (*s)
            s++;
        return ((char *)s);
    }
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    return (NULL);
}

/*
int main ()
{
    const char str[] = "Tengo hambre";
	//const char str[] = "\0";
    //char c = 'e'; // marche
    //char c = 'f'; // marche
    char c = '\0'; //(doit retourner pointeur sur '\0' et non NULL). Marche.

    // cas ou il y a la lettre dans str
    //printf("%s\n", ft_strchr(str, c));
    //printf("%s\n", strchr(str, c));

    // cas ou on cherche un caractere pas la : renvoie NIL ( = pointeur sur NULL)
    printf("%s\n", (char *)ft_strchr(str, c));
    printf("%s\n", (char *)strchr(str, c));

    // cas ou on cherche un caractere pas la : doit renvoyer l'adresse de \0. Ca marche :)
    //printf("%p\n", ft_strchr(str, c));
    //printf("%p\n", strchr(str, c));

    return (0);
}
*/

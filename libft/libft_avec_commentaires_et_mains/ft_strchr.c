/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:21:01 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/09 14:21:03 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <unistd.h>

/*
Returns a pointer to the first occurence of the character c in the string s.
If not found, returns NULL.
Null byte considered as part of the string so if c is specified as \0 it returns a pointer 
to the terminator, it does not return NULL.
*/


char *ft_strchr(const char *s, int c)
{
    int i;
    char *temp;

    i = 0;

// ---------------------------------
// cas ou c = '\0'
    while (s[i])
        i++;

    if (c == '\0')
        {
            temp = &((char *)s)[i + 1]; // cat s[i] c'est le dernier caractere avant le null byte et que nous on veut l'adresse du null byte
            return(temp);
        }
// ---------------------------------
    i = 0;
    while (s[i] != c && s[i] != '\0')
        i++;

    if (s[i] != '\0')
    {                   
        temp = &((char *)s)[i];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
        return(temp);
    }
    else
        return(NULL);
}


/*
#include <string.h>
#include <stdio.h>

int main ()
{
    const char str[] = "Tengo hambre";
    //char c = 'e'; // marche
    char c = 'f'; // marche
    //char c = '\0'; //(doit retourner pointeur sur '\0' et non NULL). Marche.

    // cas ou il y a la lettre dans str
    //printf("%s\n", ft_strchr(str, c));
    //printf("%s\n", strchr(str, c)); 

    // cas ou on cherche un caractere pas la : renvoie NIL ( = pointeur sur NULL)
    printf("%p\n", ft_strchr(str, c));
    printf("%p\n", strchr(str, c));

    // cas ou on cherche un caractere pas la : doit renvoyer l'adresse de \0. Ca marche :)
    //printf("%p\n", ft_strchr(str, c));
    //printf("%p\n", strchr(str, c));

    return (0);
}
*/
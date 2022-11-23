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


char *ft_strchr(const char *str, int c)
{
    int i;
    char *temp;
    //char s[sizeof(char) * ft_strlen((char *)str)]; // APPARAMMENT PAS LE DROIT CAR TABLEAU A DIMENSION VARIABLE DONC NE PASSE PAS LA NORME

    /* i = 0;
    while (str[i])
        s[i] = str[i];
    s[i + 1] = '\0'; */

    //temp = '\0'; // initialisation de temp pour eviter message d'erreur
    i = 0;

// ---------------------------------
// cas ou c = '\0'
    while (str[i])
        i++;

    if (c == '\0')
        {
            temp = &((char *)str)[i + 1]; // cat str[i] c'est le dernier caractere avant le null byte et que nous on veut l'adresse du null byte
            //temp = &s[i + 1];
            return(temp);
        }
// ---------------------------------
    i = 0;
    while (str[i] != c && str[i] != '\0')
    //while (s[i] != c && s[i] != '\0')
        i++;

    if (str[i] != '\0')
    //if (s[i] != '\0')  
    {                   
        //temp = &s[i];
        temp = &((char *)str)[i]; 

    /* ligne du dessus : c'est bourrain de forcer comme ca en mettant que str est 
    un char pour eviter l'erreur de comme quoi c'est un const char, je ne pense pas que ca 
    passe a la correction */
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
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
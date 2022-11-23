
#include "libft.h"

char *ft_strtrim(char const *str, char const *set)
{
    int i;
    int j;
    int n;
    char *new_str1;
    char *new_str2;
    //char *new_str3;
    new_str1 = ft_calloc(ft_strlen(str) - ft_strlen(set), sizeof(char));
    new_str2 = ft_calloc(ft_strlen(new_str1) - ft_strlen(set), sizeof(char));
    //new_str3 = ft_calloc(ft_strlen(new_str2), sizeof(char));
    int count;

    i = 0;
    n = 0;
    count = 0;
    // pour le set du debut
    while (str[i])
    {
        if (str[i + j] == set[j] && count != 1)
            j++;
        else if (j == ft_strlen(set))
        {
            i = i + j;
            j = 0;
            count = 1;
        }
        else
        {
            new_str1[n] = str[i];
            n++;
            i++;
        }
    }
    new_str1[n] = '\0';

    // pour le set de fin
    i = ft_strlen(new_str1) - 1;
    j = 1;
    count = 0;
    n = 0;
    while (i >= 0)
    {
        if (new_str1[i] == set[j] && count != 1)
        {
            j--;
            i--;
        }
        else if (j == -1)
        {
            j = 0;
            count = 1;
        }
        else
        {
            new_str2[n] = new_str1[i];
            n++;
            i--;
        }
    }
    new_str2[n] = '\0';
/*
    // pour remettre dans le bon ordre (mirroir)
    i = ft_strlen(new_str2);
    n = 0;
    while (i >= 0)
        new_str3[n++] = new_str2[i--];
    new_str3[n] = '\0';

    return(new_str3);
*/
    return(new_str1); // pour le test, a effacer
}

/*

// J AVAIS MAL COMPRIS : ENLEVE "ON" QU S ILS SONT AU TOUT DEBUT ET A LA TOUTE FIN, PAS AU MILIEU D UN MOT. 
#include <stdio.h>

int main ()
{
    char str[] = "Bonbonbon";
    //char str[] = "Bonjour bonjour bonjour";
    char set[] = "on";

    printf("Ma fonction : %s", ft_strtrim(str, set));
    //printf("Ma fonction : %s", strtrim(str, set));

    return(0);
}
*/
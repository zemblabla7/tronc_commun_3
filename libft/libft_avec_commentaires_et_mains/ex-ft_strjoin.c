#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	//printf("ft_strlen = %d\n", i);
	return (i);
}

int words_count(const char *str)
{
    int w; // words

    w = 0;
    while (str[w]) // str[w][l] : l� on compte direct les mots
        w++;
    //printf("words_count = %d\n", w);
    return(w);
}

char *ft_strjoin(const char *str1, const char *str2)
{
    // calcul de la longeur totale de new_string pour pouvoir malloc
    int ft_strlen_total;
    ft_strlen_total = ft_strlen(str1) + (ft_strlen(str2) * (words_count(str1) - 1)); //car pas de separateur apres le dernier element)
    //printf("ft_strlen_total = %d\n", ft_strlen_total);
    char *new_str = malloc((sizeof(char)) * ft_strlen_total);
    if (new_str == NULL) //  = si malloc a �chou�
    //if (new_str[0] != '\0')
        return(NULL);

    // jointage
    int w; // words
    int l; // letters
    int y; // letters new_string

    w = 0;
    y = 0;
    while (y <= ft_strlen_total)
    {
        l = 0;
        //while (str1[w][l] != '\0')
        while (str1[w])
            new_str[y++] = str1[l++]; // ne pas mettre str1[w][l++] sinon erreur. on est deja dans le bon mot grace au while au dessus.
        printf("new_str : %c\n", new_str[0]);
        l = 0;
        while (str2[l] != '\0' && w < words_count(str1))
            new_str[y++] = str2[l++];
        printf("new_str : %c\n", new_str[y]);
        w++;
// il me faut tester la fonction pour voir o� mettre (-1) pour eviter de mettre un separateur apr�s le dernier element dans str1
    }
    new_str[y] = '\0';
    ///////////////////
    printf("new_str : %c", new_str[0]);
    /*
    y = 0;
    while (new_str[y] != '\0')
    {
        printf("new_str : %d", new_str[y]);
        y++;
    }
    */
    ///////////////////
    //return(&new_str[0]);
    return("test");
}

int main()
{
    char str1[] = {'a', 'b', 'c', 'd', '\0'};
    //char str1[] = "popet", "llopet", "lala";
    //printf("str1 : %s\n", str1);

    char str2[] = "___";
    //printf("str1 : %s\n", str1);
    //printf("str2 : %s\n", str2);

    printf("Ma fonction : %s\n", ft_strjoin(str1, str2));
    //printf("Vraie fonction : %s", strjoin(str1, str2));

return(0);
}

#include <stdio.h>

int    word_length(char *str, char c)
{
    int    i;
    int    letters;

    i = 0;
    letters = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            while (str[i] == c && str[i] != '\0')
                i++;
            return(i);
        }
        if (str[i] != c)
        {
            while (str[i] != c && str[i] != '\0')
            {
                letters++;
                i++;
            }
            break ;
        }
    }
    return (letters);
}

int    count_words(char *str, char c)
{
    int    nb_of_words;
    int    i;

    nb_of_words = 0;
    i = 0;
    while (str[i])
    {
        if ((str[i] != c && str[i] != '\0')
            && (str[i + 1] == c || str[i + 1] == '\0'))
        {
            nb_of_words++;
        }
        i++;
    }
    return (nb_of_words);
}

void    write_words(char *dest, char *src, char c)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (src[i] == c)
        i++;
    while (src[i] != c && src[i] != '\0')
        dest[j++] = src[i++];
    dest[j] = '\0';
}

int    write_split(char **string, char *str, char c)
{
    int    word;
    int    total_nb_of_words;

    word = 0;
    total_nb_of_words = count_words(str, c);
    while (word <= total_nb_of_words) // si je mets direct la fx count_words ici alors ça deviendra de valeur 2 puis 1 au lieu de 3 car la valeur de str diminue à chaque boucle.
    {
        string[word] = malloc(sizeof(char) * (word_length(str, c) + 1));
        if (string == NULL)
            return (0);
        write_words(string[word], str, c);
        str = str + word_length(str, c);
        write_words(string[word], str, c);
        str = str + word_length(str, c) + 1; // str + j = str[j] donc le str envoyé dans write_words ne vaudra plus str[0] mais str[j].
        word++;
    }
    return (1);
}

char    **ft_split(char const *s, char c)
{
    char    **string;
    int        words;

    words = count_words((char *)s, c);
    string = malloc(sizeof(char *) * (words + 1));
    if (string == NULL || s == NULL)
        return (NULL);
    if (write_split(string, (char *)s, c) == 0)
    {
        while (words > 0)
            free(string[--words]); // on decremente avant pq dans les [] c est tjrs un nb en moins
        free(string);
        // string = NULL;
    }
    return (string);
}

int main()
{
    int i = 0;
    char **split;
    split = ft_split("   carolina    l  ", ' ');
    while(split[i])
    {
        printf("%s\n", split[i]);
        i++;
    }
    return 0;
}

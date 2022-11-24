/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:18:56 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 15:42:57 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//PAS FINI

#include "libft.h"

// ne pas oublier de free!!!
// voir commentaire plus bas : il manque une sous-fonction


////////////// EFFACER

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

//////////////////////////

int     check_sep(char current, char c)
{
		if (current == c || current == '\0')
			return 1;
		else
            return 0;
}

char    count_words(char *str, char c)
{
	int nb_of_words;
	int i;

	nb_of_words = 0;
	i = 0;
	while(str[i])
	{
		if(check_sep(str[i], c) == 0 && check_sep(str[i + 1], c) == 1)
		{
			nb_of_words++;
		}
		i++;
	}
	return(nb_of_words);
}

void write_words(char *dest, const char *src, char c)
{
    int i;

    i = 0;
    while (check_sep(src[i], c) == 0)
    {
        dest[i] = src[i];
		i++;
    }
    dest[i] = '\0';
}

int	write_split(char **string, const char *str, char c) // pourquoi int??
{
	size_t	j;
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (check_sep(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[j], c) == 0)
				j++;
			string[word] = (char *)malloc(sizeof(char) * (j + 1));
			if (string == NULL)
				return (EXIT_FAILURE);
			write_words(string[word], str, c);
			str = str + j; // str + j = str[j] donc le str envoyé dans write_words ne vaudra plus str[0] mais str[j].
			word++;
		}
	}
	return (EXIT_SUCCESS);
}

char **ft_split(char const *s, char c)
{
	char **string;
	int words;

	words = count_words((char *)s, c);
	string = (char **)malloc(sizeof(char *) * (words + 1));
	if (string == NULL || s == NULL)
        return (NULL);
    if (write_split(string, (char *)s, c) == EXIT_FAILURE)
	{
		while (words > 0)
			free(string[--words]); // on decremente avant pq dans les [] c est tjrs un nb en moins
		free(string);
		//string = NULL;
	}
	return (string);

}

/* MAIN DE PISCINE modifi� pour essayer a 42
#include <stdio.h>

int main (int argc, char **argv)
{
char **split;
int i = 0;

if (argc != 2)
return 0;

split = ft_split(argv[1], argv[2]);

while(split[i])
{
printf("%s\n", split[i]);
i++;
}
return 0;
}
 */

int main()
{
	char s[] = "me llamo carolina y tengo hambre";
	char c = ' ';

	//printf("%s\n", *ft_split(s, c));

	int i = 0;
	char **split;
	split = ft_split(s, c);
	while(split[i])
    {
        printf("%s\n", split[i]);
        i++;
    }
    return 0;
}

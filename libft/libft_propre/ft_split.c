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

int     check_sep(char *str, int i, char c)
{
	while(str[i])
	{
		if (str[i] == c)
			return 1;
		//else
		//return 0;
	}
	return 0;
}

char    words(char *str, int i, char c)
{
	char *word;
	int word_length;

	word = malloc(sizeof(char) * (word_length + 1));
	//  je ne sais pas pourquoi les deux prochaines lignes posent probleme mais il faut penser a les remettre!!
	//if (word == NULL)
	//return (NULL);
	word_length = 0;

	while(str[i])
	{
		while(check_sep(str, i, c) == 0)
		{
			i++;
			word_length++;
			word[word_length] = str[i];
		}
	}
	return(*word);
}

int strlen_total(char *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (check_sep(str, i, c) == 0)
			j++;
		i++;
	}
	return (j);
}

char **ft_split(char const *s, char c)
{
	char **string;
	char *str;
	int i;
	int a;
	int b;

	//string = malloc(sizeof(char) * (strlen_total(str, c) + 1));
	//string = malloc(sizeof(char *) * (nombredestrings + 1)); 
	/*ecrire une fonction qui compte le nombre de strings 
	(donc nombre de mots), car qd on fait un malloc pour un tableau de double
	pointeur alors le malloc n'est pas pour le nombre de lettres mais pour 
	le nombre de mots (puis apres on malloc words pour le nombre de lettres). */
	if (string == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		str[i] = ((char *)s)[i];
		i++;
	}
	str[i] = '\0';
	i = 0;
	a = 0;
	b = 0;
	while(str[i])
	{
		while(check_sep(str, i, c) == 0)
		{
			string[a][b] = words(str, i, c);
			b++;
			i++;
		}
		while (check_sep(str, i, c) == 1)
			i++;
		a++;
	}
	return(string);
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

	printf("%s\n", *ft_split(s, c));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:18:56 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/27 12:06:28 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_length(char *str, char c)
{
	size_t	len;

	len = 0;
	while (*str == c) // longeur separateur pour re-set str
			++str;
	while (str[len] != c && str[len] != '\0') // longeur mot pour malloc
		++len;
	return (len);
}

size_t	count_words(char *str, char c)
{
	size_t	nb_of_words;
	size_t	i;

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

void	write_words(char *dest, char *src, char c)
{
	size_t	i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
}

int	write_split(char **string, char *str, char c)
{
	size_t	word;
	size_t	total_nb_of_words;
	size_t	i;

	word = 0;
	total_nb_of_words = count_words(str, c);
	while (word < total_nb_of_words) // si je mets direct la fx count_words ici alors ça deviendra de valeur 2 puis 1 au lieu de 3 car la valeur de str diminue à chaque boucle.
	{
		string[word] = malloc(sizeof(char) * (word_length(str, c) + 1));
		if (string[word] == NULL)
			return (EXIT_FAILURE);
		i = 0;
		while (str[i] == c && str[i] != '\0')
			++i;
		str += i;
		write_words(string[word], str, c);
		str = str + word_length(str, c); // str + j = str[j] donc le str envoyé dans write_words ne vaudra plus str[0] mais str[j].
		word++;
	}
	string[total_nb_of_words] = NULL;
	return (EXIT_SUCCESS);
}

char	**ft_split(char const *s, char c)
{
	char	**string;
	size_t	words;

	words = count_words((char *)s, c);
	string = malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
		return (NULL);
	if (write_split(string, (char *)s, c) == EXIT_FAILURE)
	{
		while (words > 0)
			free(string[--words]); // on decremente avant pq dans les [] c est tjrs un nb en moins
		free(string);
		// string = NULL;
	}
	return (string);
}

// MAIN DE PISCINE modifi� pour essayer a 42
/*
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


// int main()
// {
// 	char s[] = "carolina tiene mucha hambre";
// 	char c = ' ';

// 	//printf("%s\n", *ft_split(s, c));

// 	int i = 0;
// 	char **split;
// 	split = ft_split(s, c);
// 	while(split[i])
// 	//while(i <= 3)
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// 	return 0;
// }
/*
int main(int ac, char **av)
{
	int	i = 0;
	char **split;
	//split = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	//printf("word_count --> %zu\n", count_words("", 'z'));
	if (ac > 2)
	{
		split = ft_split(av[1], av[2][0]);
		while(split[i])
		{
			printf("%s\n", split[i]);
			free(split[i]);
			i++;
		}
		free(split);
	}
	return (EXIT_SUCCESS);
}
*/

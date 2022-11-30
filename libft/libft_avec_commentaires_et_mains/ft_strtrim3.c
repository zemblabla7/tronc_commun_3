/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:00:48 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/25 17:56:15 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	checkbeggining(char *str, char *set)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (str[i])
	{
		if (checkset(str[i], set) == 1)
			found = 1;
		if (checkset(str[i], set) == 0)
		{
			if (found == 1)
				return (i);
			else
				return (0);
		}
		i++;
	}
	return (EXIT_SUCCESS);
}

static int	checkending(char *str, char *set)
{
	int	n;
	int	found;

	n = ft_strlen(str) - 1;
	found = 0;
	while (n >= 0)
	{
		if (checkset(str[n], set) == 1)
			found = 1;
		if (checkset(str[n], set) == 0)
		{
			if (found == 1)
				return (n);
			else
				return (ft_strlen(str));
		}
		n--;
	}
	return (EXIT_SUCCESS);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	n;
	size_t size;
	int		j;
	char	*newstr;

	i = checkbeggining((char *)s1, (char *)set);
	n = checkending((char *)s1, (char *)set);
	size = n - i + 1;
	if (s1 == NULL || (i == EXIT_SUCCESS && n == EXIT_SUCCESS)) // pas de string ou que des separateurs
	{
		newstr = malloc(sizeof(char) * 1);
		if (newstr == NULL)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	else if ((i == 0 && n == ft_strlen(s1)) || set == NULL) // pas de separateurs
		newstr = malloc(sizeof(char) * size);
	else // autres : choses a trimer
		newstr = malloc(sizeof(char) * size + 1);
	if (newstr == NULL)
		return (NULL);
	j = 0;
	while (i <= n)
		newstr[j++] = s1[i++];
	newstr[j] = '\0';
	return (newstr);
}





/*
	if (s1 == NULL || (i == EXIT_SUCCESS && n == EXIT_SUCCESS))
	{
		newstr = malloc(sizeof(char) * 1);
		newstr[0] = '\0';
		return (newstr);
	}
	if (set == NULL || )
	{
		newstr = malloc(sizeof(char) * (ft_strlen(s1) + 1));
		i = 0;
		j = 0;
		while (s1[i])
			newstr[j++] = s1[i++];
		newstr[j] = '\0';
		return (newstr);
	}
	if (i == n)
		newstr = malloc(sizeof(char) * 2);
	else
		newstr = malloc(sizeof(char) * ((n - i) + 2));
	if (newstr == NULL)
		return (NULL);
	j = 0;
	while (i <= n)
		newstr[j++] = s1[i++];
	newstr[j] = '\0';
	return (newstr);

	*/

/*
int main ()
{
	char str[] = " xxxxtripouile";
	char set[] = " x";
	char *new_str = ft_strtrim(str, set);

	printf("%s", new_str);

	free(new_str);

	return(0);
}
*/

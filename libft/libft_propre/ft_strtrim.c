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
	return (ft_strlen(str));
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
	return (ft_strlen(str));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		n;
	int		j;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	i = checkbeggining((char *)s1, (char *)set);
	n = checkending((char *)s1, (char *)set);
	if (i == n)
		newstr = malloc(sizeof(char) * 1);
	else
		newstr = malloc(sizeof(char) * ((n - i) + 1));
	if (newstr == NULL)
		return (NULL);
	j = 0;
	if (i == n)
		newstr[0] = '\0';
	else
	{
		while (i <= n)
			newstr[j++] = s1[i++];
		newstr[j] = '\0';
	}
	return (newstr);
}

/*
int main ()
{
	char str[] = "llopet \n caro \t leila \n helia \t karl";
	char set[] = " ";

	printf("%s", ft_strtrim(str, set));

	return(0);
}
*/

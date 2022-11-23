
#include "libft.h"

static int    checkset(char    c, char *set) // static car fx que ici, pas dans libft.h
{
    int    i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

static int checkbeggining(char *str, char *set)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (checkset(str[i], set) == 0)
			return(i);
		i++;
	}
	return(0);
}

static int checkending(char *str, char *set)
{
	int n;

	n = ft_strlen(str) - 1;
	while(n >= 0)
	{
		if (checkset(str[n], set) == 0)
			return(n);
		n--;
	}
	return(0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int n;
	int j;
	char *newstr;

	newstr = ft_calloc(ft_strlen(s1), sizeof(char));
	if (newstr == NULL)
        return (NULL);
	i = checkbeggining((char *)s1, (char *)set);
	n = checkending((char *)s1, (char *)set);
	j = 0;
    while (i <= n)
        newstr[j++] = s1[i++];
    newstr[i] = '\0';
 	return(newstr);
}

/*
int main ()
{
    char str[] = "onbonbon";
    char set[] = "on";

    printf("Ma fonction : %s", ft_strtrim(str, set));

    return(0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:21:25 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 17:58:53 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//PAS FINI

// inverse de atoi : convert integer to string

#include "libft.h"

char reverse(char *string)
{
	int i;
	int len;
	char temp;

	i = 0;
	len = ft_strlen(string);
	while (string[i])
	{
		temp = string[i];
		string[i] = string[len];
		string[len] = temp;
		i++;
		len--;
	}
	return(*string);
}

char *ft_itoa(int n)
{
	char *string;
	char temp;
	int len; // longueur de l'int (nb de chiffres)
	int i;
	int nb;
	
	nb = n;
	len = 0;
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	if (nb < 10)
		len++;
	string = malloc(sizeof(char) * len);
	//string = malloc(sizeof(char) * 2); // a remplacer qd je saurais comment calculer len et sinon utiliser calloc au lieu de malloc
	if (string == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		string[i] = '-';
		i++;
	}
	while (n >= 10)
	{
		string[i] = n % 10 + '0'; // donne un resultat a plusieurs chiffres donc besoin de plus d un espace pour etre ecrit dans la string donc il faut trouver la facon d ecrire string[i; i+1, i+2] = n % 10 + '0';
		i++;
	}
	//if (n < 10)
		//string[i] = n + '0';
	string[i] = '\0';
	return(reverse(string));
}



int main()
{
	int n = 45;
	printf("%s\n, (char *)ft_itoa(n)");
	return(0);
}



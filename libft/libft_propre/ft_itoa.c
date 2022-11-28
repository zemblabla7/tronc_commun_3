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

#include "libft.h"

char reverse(char *string)
{
	int i;
	int len;
	char temp;

	i = 0;
	len = ft_strlen(string) - 1;
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
	int len; // longueur de l'int (nb de chiffres)
	int i;
	unsigned int nb;

	nb = n;
	len = 1; // car d�s que le nb est pile >=10 il faut rajouter 1
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	string = malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		string[i] = '-';
		i++;
	}
	nb = n;
	while (nb >= 10)
	{
		string[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	if (nb < 10)
		string[i] = nb + '0';
	string[i + 1] = '\0';
	return (NULL);
	// return(reverse(string));
}

// main ne marche pas mais sur C tutor je vois que le resultat est bon

int main()
{
	int n = 45;
	int		len;

	len = 0;
	char *res;
	res = malloc(sizeof(char) * 3);
	res = ft_itoa(n);
    while (res[len])
		len++;
	write(1, res, len);
    free(res);

	return(0);
}



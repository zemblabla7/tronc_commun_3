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

// dans libft avec mains et commentaires il y a ex-ft_itoa_2 qui marche mais sans reverse. La j essaye de le remplacer par len-- aulieu de i++;
// --> RE TESTER MA FONCTION EX-FT_ITOA2.C AVEC DES PRINTF DANS LE REVERSE POUR VOIR SI C EST PAS CA LE PB!! PLUTOT QUE DE M EMMERDER A TOUT CHANGER

char *ft_itoa(int n)
{
	char *string;
	int len; // longueur de l'int (nb de chiffres)
	int len_temp;
	//int i;
	unsigned int nb;

	nb = n;
	len = 1; // car d�s que le nb est pile >=10 il faut rajouter 1
	while (nb >= 10)
	{
		nb = nb / 10;
		len++;
	}
	len_temp = len;
	if (n < 0)
		len++; // car il faut une place en plus pour le "-" pour le malloc
	nb = n;
	string = malloc(sizeof(char) * (len + 1));
	if (n < 0)
		string[0] = '-';
	if (string == NULL)
		return (NULL);
	// i = 0;
	// if (n < 0)
	// {
	// 	string[i] = '-';
	// 	i++;
	// }
	// nb = n;
	while (nb >= 10)
	{
		string[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	if (nb < 10)
		string[len] = nb + '0';
	string[len_temp + 1] = '\0';
	return(string);
}


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


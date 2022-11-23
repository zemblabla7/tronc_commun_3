/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:21:25 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 14:21:27 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char    *string;
    char    temp;
    int     len; // longueur de l'int (nb de chiffres)
    long    nb;

    nb = n;
    while (nb > 10)
    {
        nb = nb / 10;
        len++;
    }
    string = malloc(sizeof(char) * (len + 1));
    if (string == NULL)
        return (NULL);
    nb = n;
    if (n < 0)
        string[0] = '-'; // premier caractere
    string[len + 1] = '\0'; // derniere caractere
    while(nb > 0)
    {
        string[len--] = nb % 10 + '0';
        nb = nb / 10;
    }
    return(string);
}

int main()
{
int n = 45;
// voir while de leila
printf("%s\n, (char *)ft_itoa(n)");
return(0);
}


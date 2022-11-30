/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:18:58 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/09 13:18:59 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/* Dans le man, temp est sense etre un array (donc une string), pas juste un char donc verifier que ca passe qd meme
Du coup pour eviter le meme message d'erreur de leila il faudra que je donne une taille a mon temp :
char temp[(sizeof(char)) * n]; APPARAMMENT PAS LE DROIT CAR TABLEAU A DIMENSION VARIABLE DONC NE PASSE PAS LA NORME
*/

void *ft_memmove(void *dest, const void *src, size_t n)
{
    long unsigned int i;
    // est-ce que temp devrait etre un void pour pouvoir lui donner n'importe quel type de data et non que des char?
    //void *temp;
    char temp;

    i = 0;
    while (i < n)
    {
        //((char *)temp)[i] = ((char *)(src))[i];
        temp = ((char *)(src))[i];
        //((char *)dest)[i] = ((char *)temp)[i];
        ((char *)dest)[i] = temp;
        i++;
    }
    return(dest);
}


/*
int main () 
{
    char src[] = "carolina";
    char dest[] = "karl_leila_raph_helia";

    ft_memmove(dest + 1, src, 4); 
    printf("%s\n", dest);

    memmove(dest + 1, src, 4);
    printf("%s\n", dest);

    return (0);
}
*/
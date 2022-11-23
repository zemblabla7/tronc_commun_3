/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:12:58 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/15 15:13:00 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//GERER LES SIZE MAX!!

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr; 
  
    ptr = malloc(nmemb * size); 
    if (ptr == NULL) // soit : if (!ptr) 
        return (NULL); 
    ft_bzero(ptr, nmemb * size); 
        return (ptr); 

}

/*
#include <stdio.h>

int main ()
{
    int nb_of_elements = 5;
    int size_of_bytes = sizeof(int);

    //printf("Ma fonction = %s\n", (char *)ft_calloc(nb_of_elements, size_of_bytes));
    //printf("Vraie fonction = %s\n", (char *)calloc(nb_of_elements, size_of_bytes));

    printf("Ma fonction = %p\n", ft_calloc(nb_of_elements, size_of_bytes));
    printf("Vraie fonction = %p\n", calloc(nb_of_elements, size_of_bytes));

    return(0);
}
*/
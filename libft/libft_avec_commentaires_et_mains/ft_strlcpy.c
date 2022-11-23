/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:49:48 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/07 14:49:53 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <unistd.h>
//#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	//unsigned int	i;
	size_t i;

	i = 0;
	if (size <= 0) // < pour prendre en compte erreurs avec nb negatif
	{
		i = ft_strlen(src);
	}

	if (size > 0)
	{
		//while (src[i] != '\0' && i < size)
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (i); // ca doit retourner la longeur de src 
}


#include <stdio.h>
#include <bsd/string.h> // gcc ft_strlcpy.c -lbsd

int main ()
{
	char dest[] = "..... hambre";
	char src[] = "Tengo";
	int size = 1;

	char dest2[] = "..... hambre";
	char src2[] = "Tengo";


	ft_strlcpy(dest, src, size); 
	//printf("%s\n", dest);
	printf("moi : %s\n", src);
	printf("%li\n", ft_strlcpy(dest, src, size));
	

	strlcpy(dest, src, size);
	//printf("%s\n", dest);
	printf("vraie : %s\n", src);
	printf("%li\n", strlcpy(dest2, src2, size));


	return (0);
}

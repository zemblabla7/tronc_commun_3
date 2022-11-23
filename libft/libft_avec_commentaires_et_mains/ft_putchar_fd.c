/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:27:11 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 14:27:12 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*s'inspirer de :

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


tous les "fd" on remplace ex: write(fd). Le prochain projet (get next line) c est pareil, c est ls fd. 
*/

#include "libft.h"

void ft_putchar_fd(char c, int fd)

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:27:55 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 14:27:56 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*s'inspirer de :

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
*/

#include "libft.h"

void ft_putstr_fd(char *s, int fd)

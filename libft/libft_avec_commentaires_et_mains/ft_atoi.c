/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:45 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/07 14:38:05 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// a modifier : qd i = 0 si i = _ ou + et que i + 1 est aussi egal a _ ou + alors on return 0 parce qu on veut un seul signe.


int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	unsigned int	negative;
	unsigned int	nb;

	i = 0;
	nb = 0;
	negative = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	if (nptr[i] == '-')
	{
		negative = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + nptr[i] - '0';
		i++;
	}
	if (negative == 1)
		nb = nb * (-1);
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char str[] = "  \t-67";

	printf("ma fonction : %d\n", ft_atoi(str));
	printf("vraie fonction : %d\n", atoi(str));

	return (0);
}
*/
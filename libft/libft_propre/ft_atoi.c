/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:45 by casomarr          #+#    #+#             */
/*   Updated: 2022/11/21 16:18:40 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	unsigned int	negative;
	int	nb;

	i = 0;
	nb = 0;
	negative = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if ((nptr[i] == '+' || nptr[i] == '-') && 
		(nptr[i + 1] == '+' || nptr[i + 1] == '-'))
		return (0);
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
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("\nRegular Function::::%d::::\n", atoi(av[1])); 
		printf("Amazing Function::::%d::::\n\n", ft_atoi(av[1]));
		return (0);
	}
	return (0);
}
*/
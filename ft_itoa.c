/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:23:05 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/18 20:37:44 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_nbrlen(int nbr)
{
	int	z;

	z = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		z++;
	}
	if (nbr == 0)
		z++;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		z++;
	}
	return (z);
}

static char	*ft_neg(int neg, int l)
{
	char	*aux;

	neg *= -1;
	aux = (char *) malloc(l + 1);
	if (!aux)
		return (NULL);
	aux[l] = '\0';
	while (l-- >= 1)
	{
		aux[l] = (neg % 10) + 48;
		neg = (neg / 10);
	}
	aux[0] = '-';
	return (aux);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*itoa;

	len = ft_nbrlen(n);
	itoa = (char *) malloc(len + 1);
	if (!itoa)
		return (NULL);
	if (n <= -2147483648)
	{
		ft_strlcpy(itoa, "-2147483648", 12);
		return (itoa);
	}
	if (n < 0)
		return (ft_neg(n, len));
	itoa[len] = '\0';
	while (len-- >= 1)
	{
		itoa[len] = (n % 10) + 48;
		n = (n / 10);
	}
	return (itoa);
}

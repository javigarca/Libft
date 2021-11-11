/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:23:05 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/11 16:11:39 by javigarc         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	int		len;
	char	*itoa;
	char	sign;

	len = ft_nbrlen(n);
	itoa = (char *) malloc(len + 1);
	if (!itoa)
		return (NULL);
	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		sign = '-';
	}
	itoa[len] = '\0';
	while (len-- >= 1)
	{
		itoa[len] = (n % 10) + 48;
		n = (n / 10);
	}
	if (sign)
		itoa[0] = sign;
	return (itoa);
}

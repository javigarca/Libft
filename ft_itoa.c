/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:23:05 by javigarc          #+#    #+#             */
/*   Updated: 2021/10/21 10:53:54 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int nbr)
{
	int len;

	len = 0;
	while ((nbr / 10) > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int	i;
	int	len;
	char *itoa;

	i = 0;
	len = ft_nbrlen(n);
	itoa = (char *) malloc(len + 1);
	if (!itoa)
		return (NULL);
	if (n < 0) 
		{
			itoa[i] = '-';
			n *= -1;
			i++;
			ft_itoa(n);
		}
	if (n > 9)
		{
			itoa[i] = (n % 10) + 48;
			i++;
			ft_itoa(n/10);
		}
		itoa[len] = 00;
		return (itoa);
}

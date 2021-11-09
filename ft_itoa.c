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

char	*ft_itoa(int n)
{
	int	i;
	int	len;
	char *itoa;

	i = 0;
	len = 1;
	while ((n / 10) > 9)
		len++;
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
		return (itoa);
}

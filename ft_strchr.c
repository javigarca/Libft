/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:00:12 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/02 16:41:26 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*aux;
	char	tofind;

	i = 0;
	tofind = (unsigned char) c;
	aux = (char *) str;
	while (aux[i] != 00)
	{
		if (aux[i] == tofind)
			return (&aux[i]);
		i++;
	}
	if (aux[i] == tofind)
		return (&aux[i]);
	return (0);
}

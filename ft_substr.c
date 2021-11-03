/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:56:26 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/03 13:30:27 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;
	size_t	z;

	i = (size_t) start;
	if (i >= ft_strlen(s))
	{
		aux = (char *) malloc (1);
		aux[0] = '\0';
		return (aux);
	}
	z = 0;
	aux = (char *) malloc(len + 1);
	if (!aux)
		return (0);
	while (z < len)
	{
		aux[z] = s[i];
		z++;
		i++;
	}
	aux[z] = '\0';
	return (aux);
}

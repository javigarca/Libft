/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:21:03 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/03 13:30:16 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	pos;
	char	*string;
	char	*aux;
	int		totalsize;

	totalsize = ft_strlen(s1) + ft_strlen(s2);
	pos = (size_t)totalsize + 1;
	string = (char *)malloc(sizeof(char) * (totalsize) + 1);
	if (!string)
		return (0);
	string = ft_strdup(s1);
	aux = ft_strdup(s2);
	ft_strlcat(string, aux, pos);
	string[ft_strlen(string)] = 00;
	return (string);
}

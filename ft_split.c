/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:20:57 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/05 13:03:28 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_countsubs(char *str, int c)
{
	int		cont;
	int		i;

	cont = 0;
	i = 0;
	while (str[i] != 00)
	{
		if (str[i] == c)
			cont++;
		i++;
	}
	return (cont);
}

static int	ft_findindex(char *str, char c, int start)
{
	while (str[start] != 00)
	{
		if (str[start] == c)
			return (start);
		start++;
	}
	return (0);
}

char		**ft_split(char const *s, char c)
{
	char	**strstr;
	char	*aux;
	int		i;
	int		pos;
	
	if (s == NULL)
		return (NULL);
	aux = ft_strdup((char *)s);
	if (!aux)
		return (0);
	pos = ft_countsubs(aux, c);
	if (pos == 0)
	{
		strstr = 00;
		return (strstr);
	}
	pos++;
	strstr = (char **)malloc((sizeof (char *) * pos) + 1);
	if (!strstr)
		return (0);
	i = 0;
	strstr[i] = ft_substr(aux, i, (ft_strlen(aux) - ft_findindex(aux, c, i)));
	i++;
	while (i <= pos)
	{
		strstr[i] = ft_substr(aux, ft_strlen(strstr[i - 1] - 1), ft_findindex(aux, c, ft_strlen(strstr[i -1] - 1)));
	   i++;
	}
	strstr[i] = NULL;
	free (aux);
	return (strstr);
}

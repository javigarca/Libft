/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:20:57 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/16 15:48:10 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_countsubs(char *str, int c)
{
	int		cont;
	int		i;

	cont = 0;
	i = ft_strlen(str);

	while (i != 0)
	{
		if (*str == c)
			cont++;
		str++;
		i--;
	}
	return (cont);
}

char		**ft_split(char const *s, char c)
{
	char	**strstr;
	char	*aux;
	size_t	chrfound;
	
	if (!s)
		return (NULL);
	aux = ft_strdup((char *)s);
	chrfound = ft_countsubs(aux, c);
	if ((chrfound == 0) || (chrfound == (ft_strlen(aux))))
		return (NULL);
	strstr = (char **)malloc((sizeof (char *) * chrfound) + 1);
	if (!strstr)
		return (0);
	strstr[(chrfound + 1)] = ft_strdup("\0");
	while (chrfound >= 1)
	{
		strstr[chrfound] = (char *)malloc((sizeof (char *)) * ft_strlen(ft_strrchr(aux, c)));
		if (!strstr[chrfound])
			return (0);
		strstr[chrfound] = ft_strrchr(aux, c);
		aux = ft_substr(aux, 0, ft_strlen(aux) - ft_strlen(strstr[chrfound]));
		chrfound--;
	}
		strstr[chrfound] = (char *)malloc((sizeof (char *)) * ft_strlen(aux));
		if (!strstr[chrfound])
			return (0);
		strstr[chrfound] =	aux;
	return (strstr);
}

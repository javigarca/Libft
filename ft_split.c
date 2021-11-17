/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:20:57 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/18 00:34:34 by javi_pop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_countsubs(const char *str, char c)
{
	size_t		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != c)
				i++;
		}
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**strstr;
	char	*aux;
	size_t	chrfound;
	
	if (!s)
		return (NULL);
	aux = ft_strdup((char *)s);

	chrfound = ft_countsubs(s, c);
	strstr = (char **)malloc(sizeof (char *) * chrfound + 1);
	if (!strstr)
		return (0);
	printf("\nla cuenta es %li", chrfound);
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
		strstr[chrfound] =	ft_strtrim(aux, " ");
	return (strstr);
}

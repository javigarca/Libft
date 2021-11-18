/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:20:57 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/18 17:59:20 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_countsubs(const char *str, char c)
{
	size_t	count;
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

char	**ft_dostrstr(char **strstr, char const *s, char c, size_t numsubs)
{
	size_t	i;
	int		k;
	int		start;

	i = 0;
	k = 0;
	start = 0;
	while (s[k] && (i < numsubs))
	{
		while (s[k] && (s[k] == c))
			k++;
		start = k;
		while (s[k] && (s[k] != c))
			k++;
		strstr[i] = (char *)malloc(sizeof(char) * (k - start + 1));
		if (!strstr[i])
			return (0);
		strstr[i] = ft_substr(s, start, k - start);
		i++;
	}
	return (strstr);
}

char	**ft_split(char const *s, char c)
{
	char	**strstr;
	size_t	numsubs;

	if (!s)
		return (NULL);
	numsubs = ft_countsubs(s, c);
	strstr = (char **)malloc(sizeof (char *) * (numsubs + 1));
	if (!strstr)
		return (0);
	strstr = ft_dostrstr(strstr, s, c, numsubs);
	strstr[numsubs] = NULL;
	system ("leaks a.out");
	return (strstr);
}

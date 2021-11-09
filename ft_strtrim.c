/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:43:11 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/04 18:16:08 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findstart(char const *ss1, char const *sset)
{
	int	i;

	i = 0;
	while (ft_strchr(sset, ss1[i]) != 0)
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	int		i;
	int		z;

	if (!set)
		return (ft_strdup((char *) s1));
	if (!s1)
		return (NULL);
	i = ft_findstart(s1, set);
	z = (int) ft_strlen(s1);
	if (z < i)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[z]) != 0)
		z--;
	aux = (char *) malloc((z - i) + 2);
	if (!aux)
		return (0);
	ft_strlcpy(aux, &s1[i], (z - i) + 3);
	aux[(z - i) + 1] = '\0';
	return (ft_strdup(aux));
}

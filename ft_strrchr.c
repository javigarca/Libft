/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:08:59 by javigarc          #+#    #+#             */
/*   Updated: 2021/10/21 12:34:40 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

const char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != 00)
		i++;
	while (i > 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	if (str[i] == c)
		return (&str[i]);
	return (0);
}

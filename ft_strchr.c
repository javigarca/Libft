/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:00:12 by javigarc          #+#    #+#             */
/*   Updated: 2021/10/21 12:01:01 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

const char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != 00)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (str[i++] == c)
		return (&str[i]);
	return (0);
}

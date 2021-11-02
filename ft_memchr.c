/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:29:19 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/02 14:18:22 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*swap;
	unsigned char	tofind;

	swap = (unsigned char *) s;
	tofind = (unsigned char) c;
	i = 0;
	while ((swap[i] != 00) && (n-- > 1))
	{
		if (swap[i] == tofind)
			return (&swap[i]);
		i++;
	}
	if (swap[i] == tofind)
		return (&swap[i]);
	return (0);
}

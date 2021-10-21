/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:53:20 by javigarc          #+#    #+#             */
/*   Updated: 2021/10/21 17:28:59 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*swap;
	unsigned char	*swap2;

	swap = (unsigned char *) dst;
	swap2 = (unsigned char *) src;
	while (n-- > 0)
		*swap++ = *swap2++;
	return (dst);
}

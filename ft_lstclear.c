/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:06:12 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/17 15:28:58 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*currentnode;

	if ((!lst) || (!del))
		return ;
	currentnode = *lst;
	while (currentnode)
	{
		ft_lstdelone(currentnode, del);
		currentnode = currentnode->next;
	}
	*lst = NULL;
	free(currentnode);
}

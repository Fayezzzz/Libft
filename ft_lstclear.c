/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:27:23 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/10 17:27:23 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*res;

	if (!lst)
		return ;
	res = *lst;
	while (res)
	{
		list = res;
		res = res->next;
		ft_lstdelone(list, del);
	}
	*lst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:49:17 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/04 11:49:30 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (!del || !lst)
		return ;
	current = *lst;
	while (*lst != NULL)
	{
		*lst = (*lst)->next;
		ft_lstdelone(current, del);
		current = *lst;
	}
	*lst = NULL;
}

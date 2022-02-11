/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:52:39 by smana             #+#    #+#             */
/*   Updated: 2022/02/11 15:52:41 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	success_message(t_list	**lst1, t_list **lst2)
{
	ft_lstclear(lst1);
	ft_lstclear(lst2);
	exit(EXIT_SUCCESS);
}

void	ft_lstclear(t_list	**lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->data = 0;
		free(*lst);
		*lst = tmp;
	}
}

void	ft_print_error(void)
{
	ft_putstr_fd("error\n", 1);
	exit(EXIT_FAILURE);
}

void	ft_lstadd_back01(t_list	*lst, t_list *new)
{
	if (lst)
	{
		while ((lst)->next)
			(lst) = (lst)->next;
		(lst)->next = new;
	}
	else
		lst = new;
}

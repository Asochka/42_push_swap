/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:52:57 by smana             #+#    #+#             */
/*   Updated: 2022/02/11 15:53:00 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sa(t_list	**lst, int k)
{
	int	tmp_data;
	int	tmp_index;

	if (!*lst || !(*lst)->next)
		return ;
	tmp_data = (*lst)->data;
	tmp_index = (*lst)->index;
	(*lst)->data = (*lst)->next->data;
	(*lst)->index = (*lst)->next->index;
	(*lst)->next->data = tmp_data;
	(*lst)->next->index = tmp_index;
	if (k)
		ft_putendl_fd("sa", 1);
}

void	ft_sb(t_list	**lst, int k)
{
	int	tmp_data;
	int	tmp_index;

	if (!*lst || !(*lst)->next)
		return ;
	tmp_data = (*lst)->data;
	tmp_index = (*lst)->index;
	(*lst)->data = (*lst)->next->data;
	(*lst)->index = (*lst)->next->index;
	(*lst)->next->data = tmp_data;
	(*lst)->next->index = tmp_index;
	if (k)
		ft_putendl_fd("sb", 1);
}

void	ft_ss(t_list **lst_a, t_list **lst_b)
{
	ft_sa(lst_a, 0);
	ft_sb(lst_b, 0);
	ft_putendl_fd("ss", 1);
}

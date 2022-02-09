#include "header.h"

void	ft_ra(t_list **lst_a, int k)
{
	t_list	*tmp;
	int		tmp_data;
	int		tmp_index;
	
	if (!*lst_a || !(*lst_a)->next)
		return ;
	tmp = (*lst_a);
	tmp_data = tmp->data;
	tmp_index = tmp->index;
	while (tmp->next)
	{
		tmp->data = tmp->next->data;
		tmp->index = tmp->next->index;
		tmp = tmp->next;
	}
	ft_lstlast(tmp)->data = tmp_data;
	ft_lstlast(tmp)->index = tmp_index;
	if (k == 1)
		ft_putendl_fd("ra", 1);
}

void	ft_rb(t_list **lst_b, int k)
{
	t_list	*tmp;
	int		tmp_data;
	int		tmp_index;
	
	if (!*lst_b || !(*lst_b)->next)
		return ;
	tmp = (*lst_b);
	tmp_data = tmp->data;
	tmp_index = tmp->index;
	while (tmp->next)
	{
		tmp->data = tmp->next->data;
		tmp->index = tmp->next->index;
		tmp = tmp->next;
	}
	ft_lstlast(tmp)->data = tmp_data;
	ft_lstlast(tmp)->index = tmp_index;
	if (k == 1)
		ft_putendl_fd("rb", 1);
}

void	ft_rr(t_list **lst_a, t_list **lst_b)
{
	ft_ra(lst_a, 0);
	ft_rb(lst_b, 0);
	ft_putendl_fd("rr", 1);
}
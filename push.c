#include "header.h"

void	ft_pa(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;

	if (!(*lst_b))
		return ;
	tmp = *lst_b;
	*lst_b = (*lst_b)->next;
	ft_lstadd_front(lst_a, tmp);
	ft_putendl_fd("pa", 1);
}

void	ft_pa(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;

	if (!(*lst_a))
		return ;
	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	ft_lstadd_front(lst_b, tmp);
	ft_putendl_fd("pb", 1);
}
#include "header.h"

void	ft_sa(t_list	**lst, int k)
{
	int	tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->data;
	(*lst)->data = (*lst)->next->data;
	(*lst)->next->data = tmp;
	if (k)
		ft_putendl_fd("sa", 1);
}

void	ft_sb(t_list	**lst, int k)
{
	int	tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->data;
	(*lst)->data = (*lst)->next->data;
	(*lst)->next->data = tmp;
	if (k)
		ft_putendl_fd("sb", 1);
}

void	ft_ss(t_list **lst_a, t_list **lst_b)
{
	ft_sa(lst_a, 0);
	ft_sb(lst_b, 0);
	ft_putendl_fd("ss", 1);
}
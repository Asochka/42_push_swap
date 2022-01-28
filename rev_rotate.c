#include "header.h"

void	ft_rra(t_list **lst, int k)
{	
	t_list	*tmp;
	int		i;
	int		size;

	if (!*lst || !(*lst)->next)
		return ;
	i = 0;
	tmp = *lst;
	size = ft_lstsize(tmp);
	while (++i < size)
		ft_ra(lst, 0);
	if (k == 1)
		ft_putendl_fd("rra", 1);
}

void	ft_rrb(t_list **lst, int k)
{	
	t_list	*tmp;
	int		i;
	int		size;

	if (!*lst || !(*lst)->next)
		return ;
	i = 0;
	tmp = *lst;
	size = ft_lstsize(tmp);
	while (++i < size)
		ft_ra(lst, 0);
	if (k == 1)
		ft_putendl_fd("rrb", 1);
}

void	ft_rrr(t_list **lst_a, t_list **lst_b)
{
	ft_rra(lst_a, 0);
	ft_rrb(lst_b, 0);
	ft_putendl_fd("rrr", 1);
}
#include "header.h"

void	success_message(t_list	**lst)
{
	ft_lstclear(lst);
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

void	ft_print_stack(t_list	*list)
{
	while (list)
	{
		printf("%d ",list->data);
		list = list->next;
	}
}

void	ft_print_error(void)
{
	ft_putstr_fd("error\n", 1);
	exit(EXIT_FAILURE);
}

void	ft_lstadd_back01(t_list	*lst, t_list	*new)
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
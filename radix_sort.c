#include "header.h"

void	ft_radix_small(t_list **lst_a, int argc)
{
	if (argc == 3)
	{
		ft_sa(lst_a, 1);
		success_message(lst_a);
	}
}

void	ft_radix_sort(t_list **lst_a, int argc)
{
	if (argc < 5)
		ft_radix_small(lst_a, argc);
	
}

	//node_b = (t_list *) malloc(sizeof(t_list) * argc);
	//t_list *node_b;



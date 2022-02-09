#include "header.h"

void	ft_small_sort(t_list **node)
{
	while (!(ft_is_sorted(*node)))
	{
		if ((*node)->data < (*node)->next->data)
			ft_rra(node, 1);
		else if (((*node)->data == ft_max_data(*node)) && ((*node)->next->data == ft_min_data(*node)))
			ft_ra(node, 1);
		else ft_sa(node, 1);
	}
}

void	ft_middle_sort(t_list **node_a, t_list **node_b, int len)
{
	int	count;

	count = len;
	while (count > 3)
	{
		if ((*node_a)->index == 0 || (*node_a)->index == len - 1)
		{
			ft_pb(node_a, node_b);
			count--;
		}
		else ft_ra(node_a, 1);
	}
	ft_small_sort(node_a);
	while (*node_b)
	{
 		if ((*node_b)->index == 0)                                   
			ft_pa(node_a, node_b);
		else if ((*node_b)->index == len - 1)
		{
			ft_pa(node_a, node_b);
			ft_ra(node_a, 1);
		}
	}
}

void	ft_big_sort_final(t_list **node_a, t_list **node_b, int len)
{
	int	max_ind;
	int	median;
	int	steps;

	max_ind = len - 1;
	while (*node_b != NULL)
	{
		median = max_ind / 2;
		steps = ft_find_steps_to_maxind(*node_b, max_ind);
		if (steps == 0)
		{
			ft_pa(node_a, node_b);
			max_ind--;
		}
		else if (steps < median)
			ft_rb(node_b, 1);
		else
			ft_rrb(node_b, 1);
	}
}

void	ft_big_sort(t_list **node_a, t_list **node_b, int len, int range)
{
	int	count;

	count = 0;
	while (*node_a != NULL)
	{
		if ((*node_a)->index <= count && count > 1)
		{
			ft_pb(node_a, node_b);
			ft_rb(node_b, 1);
			count++;
		}
		else if ((*node_a)->index < range + count)
		{
			ft_pb(node_a, node_b);
			count++;
		}
		else
			ft_ra(node_a, 1);
	}
	ft_big_sort_final(node_a, node_b, len);
}

void	ft_sort_push_swap(t_list **node_a, t_list **node_b, int len)
{
	if (len == 2)
	{
		ft_sa(node_a, 1);
		success_message(node_a, NULL);
	}
	if (len == 3)
		ft_small_sort(node_a);
	else if (len <= 5)
		ft_middle_sort(node_a, node_b, len);
	else if (len <= 100)
		ft_big_sort(node_a, node_b, len, 15);
	else
		ft_big_sort(node_a, node_b, len, 30);
	ft_lstclear(node_a);
	//free(node_b); ??????
	//eeeend!!
}
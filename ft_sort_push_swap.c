#include "header.h"

void	ft_small_sort(t_list **node, int *arr)
{
	if (arr[0] == 0 && arr[1] == 2)
	{
		ft_sa(node, 1);
		ft_ra(node, 1);
	}
	else if (arr[0] == 1 && arr[1] == 0)
		ft_sa(node, 1);
	else if (arr[0] == 1 && arr[1] == 2)
		ft_rra(node, 1);
	else if (arr[0] == 2 && arr[1] == 0)
		ft_ra(node, 1);
	else if (arr[0] == 2 && arr[1] == 1)
	{
		ft_sa(node, 1);
		ft_rra(node, 1);
	}
}

void	ft_middle_sort(t_list **node_a, t_list **node_b, int len, int *arr)
{
//использую пока сам стэк а не массив тк они олинаковые, понадобится ли потом массив???
	int	count;

	count = len;
	while (count > 3)
	{
		if ((*node_a)->data == 0 || (*node_a)->data == len - 1)
		{
			ft_pb(node_a, node_b);
			count--;
		}
		else ft_ra(node_a, 1);
	}
	ft_small_sort(node_a, arr);
	while (*node_b)
	{
 		if ((*node_b)->data == 0)                                   
			ft_pa(node_a, node_b);
		else if ((*node_b)->data == len - 1)
		{
			ft_pa(node_a, node_b);
			ft_ra(node_a, 1);
		}
	}
}

//надо ли кiдать индексы в структуру?? массив состоит из нужных индексов
void	ft_sort_push_swap(t_list **node_a, t_list **node_b, int len, int *arr)
{
	if (len == 2)
	{
		ft_sa(node_a, 1);
		free(arr);
		success_message(node_a, NULL);
	}
	if (len == 3)
		ft_small_sort(node_a, arr);
	else if (len <= 5)
		ft_middle_sort(node_a, node_b, len, arr);
	else if (len <= 100)
		ft_big_sort(node_a, node_b, len, arr, 15);
	else
		ft_big_sort(node_a, node_b, len, arr, 30);
}                      
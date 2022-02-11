/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:54:25 by smana             #+#    #+#             */
/*   Updated: 2022/02/11 15:54:26 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_create_node(int num, int ind, t_list **node)
{
	t_list	*temp;

	if (!(*node))
	{
		(*node) = (t_list *) malloc(sizeof(t_list));
		if (*node)
		{
			(*node)->data = num;
			(*node)->index = ind;
			(*node)->next = 0;
		}
	}
	else
	{
		temp = (t_list *)malloc(sizeof(t_list));
		if (temp)
		{
			temp->data = num;
			temp->index = ind;
			temp->next = 0;
		}
		ft_lstadd_back01(*node, temp);
	}
}

void	ft_create_lists(int *arr, int *ind, int argc)
{
	t_list	*node_a;
	t_list	*node_b;
	int		i;

	i = 0;
	node_a = NULL;
	node_b = NULL;
	while (i < argc - 1)
	{
		ft_create_node(arr[i], ind[i], &node_a);
		i++;
	}
	free(arr);
	free(ind);
	ft_sort_push_swap(&node_a, &node_b, argc - 1);
}

void	ft_two_arrays(int *arr, int argc)
{
	int	i;
	int	*arr_sort;
	int	*ind;

	i = 0;
	arr_sort = (int *)malloc((argc - 1) * sizeof(int));
	if (!arr_sort)
	{
		free(arr);
		exit(EXIT_FAILURE);
	}
	while (i < argc - 1)
	{
		arr_sort[i] = arr[i];
		i++;
	}	
	ft_sorted_arr(arr_sort, argc);
	ft_equality(arr, arr_sort, argc);
	ind = ft_no_negative(arr, arr_sort, argc);
	free(arr_sort);
	ft_create_lists(arr, ind, argc);
}

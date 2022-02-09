#include "header.h"

int	ft_is_sorted(t_list *node)
{
	t_list	*temp;

	if (!node || !(node->next))
		return (0);
	temp = node;
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	ft_max_data(t_list *node)
{
	t_list	*temp;
	int		max;

	temp = node;
	max = temp->data;
	while (temp)
	{
		if (temp->data > max)
			max = temp->data;
		temp = temp->next;
	}
	return (max);
}

int	ft_min_data(t_list *node)
{
	t_list	*temp;
	int		min;

	temp = node;
	min = temp->data;
	while (temp)
	{
		if (temp->data < min)
			min = temp->data;
		temp = temp->next;
	}
	return (min);
}

int	ft_find_steps_to_maxind(t_list *node_b, int ind)
{
	int	steps;

	steps = 0;
	if (node_b != NULL)
	{
		while (node_b->index != ind)
		{
			steps++;
			node_b = node_b->next;
		}
	}
	return (steps);
}
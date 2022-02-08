#include "header.h"

void	success_message(t_list	**lst1, t_list **lst2)
{
	ft_lstclear(lst1);
	ft_lstclear(lst2);
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

void	ft_nodeclear(t_list **node)
{
	t_list	*tmp;

	if (*node)
	{
		tmp = *node;
		*node = (*node)->next;
		free(tmp);
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


// void	push_from_to(t_node **stack1, t_node **stack2)
// {
// 	if (*stack1)
// 	{
// 		push_back(stack2, (*stack1)->value, (*stack1)->index);
// 		pop(stack1);
// 	}
// }
// void	push_back(t_node **stack, int value, int index)
// {
// 	t_node	*curr;

// 	if (*stack == NULL)
// 		*stack = init_stack(value);
// 	else
// 	{
// 		curr = init_stack(value);
// 		curr->next = *stack;
// 		*stack = curr;
// 	}
// 	(*stack)->index = index;
// }
// void	push_front(t_node **stack, int value, int index)
// {
// 	t_node	*curr;
// 	t_node	*last;

// 	if (*stack == NULL)
// 		*stack = init_stack(value);
// 	else
// 	{
// 		curr = init_stack(value);
// 		last = find_last(*stack);
// 		last->next = curr;
// 	}
// 	(*stack)->index = index;
// }
// t_node	*init_stack(int value)
// {
// 	t_node	*node;

// 	node = (t_node *)malloc(sizeof(t_node));
// 	if (node == NULL)
// 		return (NULL);
// 	node->value = value;
// 	node->index = -1;
// 	node->next = NULL;
// 	return (node);
// }
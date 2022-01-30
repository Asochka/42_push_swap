#include "header.h"

void	ft_sorted_arr(int *array, int argc)
{
	int	i;
	int j;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < argc - 2)
	{
		j = i + 1;
		while (j < argc - 1)
		{
        	if (array[j] < array[i])
       		{
           		tmp = array[j];
            	array[j] = array[i];
            	array[i] = tmp;
        	}
			j++;
		}
		i++;
	}
}

void	ft_equality(int *arr1, int *arr2, int argc)
{
	int	i;

	i = argc - 2;
	while ((arr1[i] == arr2[i]) && (i > -1))
		i--;
	if (i == -1)
	{
		free(arr1);
		free(arr2);
		exit(EXIT_FAILURE);
	}
}

void	ft_create_node(int num, t_list	**node)
{
	t_list	*temp;

	if (!(*node))
	{
		(*node) = (t_list *) malloc(sizeof(t_list));
		if (*node)
		{
			(*node)->data = num;
			(*node)->next = 0;
		}
	}
	else
	{
		temp = (t_list *)malloc(sizeof(t_list));
		if (temp)
		{
			temp->data = num;
			temp->next = 0;
		}
		ft_lstadd_back01(*node, temp);
	}
}

void	ft_lists(int *arr, int argc)
{
	t_list *node_a;
	int		i;

	i = 0;
	node_a = NULL;
	while (i < argc - 1)
	{
		ft_create_node(arr[i], &node_a);
		i++;
	}
	ft_radix_sort(&node_a, argc);
	// ft_ra(&node, 1);
	// ft_print_stack(node);
	// printf("\n");
	// ft_sa(&node, 1);
	// ft_print_stack(node);
}

int	*ft_no_negative(int *arr, int *arr_sort, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		while (j < argc - 1)
		{
			if (arr[i] == arr_sort[j])
				arr[i] = j;
			j++;
		}
		j = 0;
		i++;
	}
	return (arr);
}

void	ft_two_arrays(int *arr, int argc)
{
	int	i;
	int	*arr_sort;

	i = 0;
	arr_sort = (int *)malloc((argc - 1) * sizeof(int));
	if (!arr_sort)
		exit(EXIT_FAILURE);
	while (i < argc - 1)
	{
		arr_sort[i] = arr[i];
		i++;
	}

	//
	// printf("array:\n");
	// i = 0;
	// while (i < argc - 1)
	// {
	// 	printf("%d ", arr[i]);
	// 	i++;
	// }
	// printf("\n");
	//
	
	ft_sorted_arr(arr_sort, argc);

	//
	// printf("sorted array:\n");
	// i = 0;
	// while (i < argc - 1)
	// {
	// 	printf("%d ", arr_sort[i]);
	// 	i++;
	// }
	// printf("\n");
	//

	ft_equality(arr, arr_sort, argc);
	arr = ft_no_negative(arr, arr_sort, argc);

	//printf("array without negative:\n");
	// i = 0;
	// while (i < argc - 1)
	// {
	// 	printf("%d ", arr[i]);
	// 	i++;
	// }
	// printf("\n");
	
	ft_lists(arr, argc);
}
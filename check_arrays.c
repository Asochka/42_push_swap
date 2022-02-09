#include "header.h"

void	ft_sorted_arr(int *array, int argc)
{
	int	i;
	int	j;
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

int	*ft_no_negative(int *arr, int *arr_sort, int argc)
{
	int	i;
	int	j;
	int	*ind;

	i = 0;
	j = 0;
	ind = (int *)malloc((argc - 1) * sizeof(int));
	if (!ind)
	{
		free(arr);
		free(arr_sort);
		exit(EXIT_FAILURE);	
	}
	while (i < argc - 1)
	{
		while (j < argc - 1)
		{
			if (arr[i] == arr_sort[j])
				ind[i] = j;
			j++;
		}
		j = 0;
		i++;
	}
	return (ind);
}
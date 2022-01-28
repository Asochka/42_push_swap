#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
// # include "libft/libft.h"

#include <stdio.h>

typedef struct s_list 
{
	int		data;
	struct	s_list *next;

} 	t_list;

int		ft_validity(char *str);
int		ft_max_min(char *str);
void	ft_repeats(int *mass, int k);
int		ft_create_number(char *str);
void	ft_print_error(void);

void	ft_two_arrays(int *arr, int argc);
void	ft_sorted_arr(int *array, int argc);
void	ft_equality(int *arr1, int *arr2, int argc);
void	ft_lstadd_back01(t_list	*lst, t_list	*new);
void	ft_create_node(int num, t_list	**node);
void	print_stack(t_list	*list);
void	ft_lists(int *arr, int argc);

#endif
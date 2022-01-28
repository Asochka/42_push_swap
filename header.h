#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

#include <stdio.h> //to delete

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
void	ft_print_stack(t_list	*list);
void	ft_lists(int *arr, int argc);

void	ft_sa(t_list	**lst, int k);
void	ft_sb(t_list	**lst, int k);
void	ft_ss(t_list **lst_a, t_list **lst_b);
void	ft_ra(t_list **lst_a, int k);
void	ft_rb(t_list **lst_b, int k);
void	ft_rr(t_list	**lst_a, t_list	**lst_b);
void	ft_rra(t_list **lst, int k);
void	ft_rrb(t_list **lst, int k);
void	ft_rrr(t_list **lst_a, t_list **lst_b);
void	ft_pa(t_list **lst_a, t_list **lst_b);
void	ft_pa(t_list **lst_a, t_list **lst_b);

#endif
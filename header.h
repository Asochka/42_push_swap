/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:54:18 by smana             #+#    #+#             */
/*   Updated: 2022/02/11 15:54:20 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_count01(char const *s, char c);
void	ft_cicle_for_arr(int count, char **mass_str, int *arr);
void	ft_clean_mass_str(char **mass_str, int *arr);

void	ft_sorted_arr(int *array, int argc);
void	ft_equality(int *arr1, int *arr2, int argc);
int		*ft_no_negative(int *arr, int *arr_sort, int argc);

void	ft_create_node(int num, int ind, t_list	**node);
void	ft_create_lists(int *arr, int *ind, int argc);
void	ft_two_arrays(int *arr, int argc);

int		ft_validity(char *str);
int		ft_max_min(char *str);
void	ft_repeats(int *mass, int k);
int		ft_create_number(char *str);
char	**ft_devide_sorting(int argc, char **argv, int *count);

void	ft_small_sort(t_list **node);
void	ft_middle_sort(t_list **node_a, t_list **node_b, int len);
void	ft_big_sort_final(t_list **node_a, t_list **node_b, int len);
void	ft_big_sort(t_list **node_a, t_list **node_b, int len, int range);
void	ft_sort_push_swap(t_list **node_a, t_list **node_b, int len);

int		ft_is_sorted(t_list *node);
int		ft_max_data(t_list *node);
int		ft_min_data(t_list *node);
int		ft_find_steps_to_maxind(t_list *node_b, int ind);

void	ft_lstadd_back01(t_list	*lst, t_list	*new);
void	ft_print_error(void);
void	ft_lstclear(t_list	**lst);
void	success_message(t_list	**lst1, t_list **lst2);

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
void	ft_pb(t_list **lst_a, t_list **lst_b);

#endif

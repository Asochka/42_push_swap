/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:49:59 by smana             #+#    #+#             */
/*   Updated: 2022/02/11 15:50:02 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void	*content)
{
	t_list	*elem;

	elem = (t_list *) malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = content;
		elem->next = 0;
	}
	return (elem);
}

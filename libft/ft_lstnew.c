#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void	*content)
{
	t_list	*elem;

	elem = (t_list *) malloc(sizeof(t_list));
	if (elem)
	{
		elem->content = content;
		elem->next = 0;
	}
	return (elem);
}
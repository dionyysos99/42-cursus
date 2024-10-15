#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*)) {
	t_list	*ptr;

	ptr = *lst;
	while (ptr)
	{
		ptr = ptr->next;
		if ((*lst)->next != 0)
			(*lst)->next = 0;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}
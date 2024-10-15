#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *a;

    a=(t_list *)malloc(sizeof(t_list));
    if(a == NULL)
        return NULL;
    a->content = content;
    a->next=NULL;
    return (a);
}
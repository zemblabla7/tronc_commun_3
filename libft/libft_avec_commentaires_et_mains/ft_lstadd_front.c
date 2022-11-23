#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new -> next = lst;
    t_list -> first = new;
    lst -> next = NULL;
}

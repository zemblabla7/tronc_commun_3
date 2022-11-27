#include "libft.h"

void  ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
		return (NULL);
    t_list -> first = lst;
    lst -> next = new;
    new -> next = NULL;
}

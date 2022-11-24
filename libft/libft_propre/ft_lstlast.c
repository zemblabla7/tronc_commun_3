#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
            return(NULL)
    While (*lst != NULL) // ou while (lst -> next)
    {
        lst = lst -> next;
    }
    return(lst);
}

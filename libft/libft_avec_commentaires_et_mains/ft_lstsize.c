#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int len;
    t_list *content;

    len = 0;
    content = t_list -> first
    While (*content != NULL)
    {
        content = content -> next;
        len++;
    }
    return(len);
}

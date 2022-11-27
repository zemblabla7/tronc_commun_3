#include "libft.h"
// rajouter toutes les fonctions bonus dans le makefile et la libft.h en suivant les consignes

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = (t_list*)malloc(sizeof(*new)); // ou sizeof(t_list)
    if (new == NULL)
            return(NULL);
    new -> content = content;
    new -> next = NULL;
    return (new);
}

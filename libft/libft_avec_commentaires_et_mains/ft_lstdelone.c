void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    t_list -> lst = t_list -> lst -> next;
    free(lst);
}

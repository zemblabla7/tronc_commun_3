void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst == NULL)
        return(NULL) // peut etre que comme void faut pas de return et donc les safety doivent etre faits de façon à ce que le code se deroule seulement si pas null et sinon rien ou "return;" seul
    t_list -> lst = t_list -> lst -> next; // on met la valeur apres lst comme premiere valeur avant de delete lst
    del(lst);
    free(lst);
}

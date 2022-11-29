#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ; // peut etre que comme void faut pas de return et donc les safety doivent etre faits de fa�on � ce que le code se deroule seulement si pas null et sinon rien ou "return;" seul
	lst = lst -> next; // on met la valeur apres lst comme premiere valeur avant de delete lst
	del(lst);
	free(lst);
}

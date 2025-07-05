#include "libft_bonus.h"

t_list *ft_lstnew(void *content)
{
    struct s_list *newNode = (struct s_list *)malloc(sizeof(struct s_list));
    if (!newNode)
        return (NULL);
    newNode->content = content;
    newNode->next = NULL;
    return (newNode);
}


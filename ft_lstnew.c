#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new -> content = content;
    new -> next = NULL;
    return (new);
}
int main()
{
    t_list *ptr;
    int a;
    a = 42;
    ptr = ft_lstnew(&a);
    printf("%d",*(int *)ptr->content);
}
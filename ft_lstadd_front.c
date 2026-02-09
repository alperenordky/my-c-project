#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!new)
    {
        return;
    }
    new->next = *lst;
    *lst = new;
}
int main()
{
    t_list *head  = NULL;
    int a = 1;
    int b = 2;
    int c = 3;

    t_list *s1 = ft_lstnew(&a);
    t_list *s2 = ft_lstnew(&b);
    t_list *s3 = ft_lstnew(&c);

    ft_lstadd_front(&head,s1);
    ft_lstadd_front(&head,s2);
    ft_lstadd_front(&head,s3);
    t_list *tmp = head;
    while(tmp)
    {
        printf("%d",*(int *)tmp->content);
        tmp = tmp -> next;
    }
    

    return 0;

}

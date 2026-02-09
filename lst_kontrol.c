#include "libft.h"
#include <stdio.h>
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;
    
    t_list *s1 =  ft_lstnew(&a);
    t_list *s2 =  ft_lstnew(&b);
    t_list *s3 =  ft_lstnew(&c);
    t_list *s4 =  ft_lstnew(&d);
    t_list *s5 =  ft_lstnew(&e);
    t_list *s6 =  ft_lstnew(&f);
    t_list *s7 =  ft_lstnew(&g);

    t_list *head = NULL;

    ft_lstadd_front(&head,s1);
    ft_lstadd_front(&head,s2);
    ft_lstadd_front(&head,s3);
    ft_lstadd_front(&head,s4);
    ft_lstadd_front(&head,s5);
    ft_lstadd_front(&head,s6);
 
     ft_lstadd_back(&head,s7);
     
   
    t_list *tmp = head;
    printf ("içerik = ");
    while(tmp)
    {

        printf("-%d",*(int *)tmp->content);
        tmp = tmp -> next;
    }

   

    t_list *last = ft_lstlast(head);
    printf("\nson eleman = %d",*(int *)last->content);



}
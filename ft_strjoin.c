#include <stdlib.h>
#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    int total_len;
    char *ptr;
    int i;
    int j;

    if(!s1 || !s2)
        return(0);
    total_len = ft_strlen(s1) + ft_strlen(s2);
    i = 0;

    ptr = (char *)malloc(sizeof(char)*(total_len + 1));
    if(!ptr)
        return(0);
    while(i < ft_strlen(s1))
    {
        ptr[i] = s1[i];
        i++;
    }
    j = 0;
    while(j < ft_strlen(s2))
    {
        ptr[i] = s2[j];
        j++;
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
    
}

#include<stdio.h>
int main()
{
    char *ptr;
    char s1[] = "hello ";
    char s2[] = "world";
    ptr = ft_strjoin(s1,s2);
    int size = ft_strlen(ptr);
    int i = 0;
    while(i < size)
    {
        printf("%c",ptr[i]);
        i++;
    }
}
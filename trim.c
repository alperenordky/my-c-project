#include <stdio.h>
#include<stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t len;
    char *ptr;
    while(*s1 && ft_strchr(set, *s1) != 0)
        s1++;
    len = ft_strlen(s1);
    while(len && s1[len - 1] && ft_strchr(set, s1[len - 1]) != 0)
        len--;

    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if(!ptr)
        return(0);

    ft_memcpy(ptr,s1,len);
    ptr[len] = '\0';
    return(ptr);
}

int main()
{
    char deger[] = "merhabaalpere";
    char set[] = "mepr";

    char *ptr = ft_strtrim(deger, set);
    int size = ft_strlen(ptr);
    int i = 0;

    while(i < size)
    {
        printf("%c",ptr[i]);
        i++;
    }
}
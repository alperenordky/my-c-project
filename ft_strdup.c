#include <stdio.h>
#include "libft.h"
#include <stdlib.h>


char    *ft_strdup(const char *str)
{
    char *str2;
    size_t len;
    size_t i;

    i = 0;
    len = ft_strlen(str);

    str2 = (char *)malloc(len + 1);
    if(str2)
    {
        while(i < len)
        {
            str2[i] = str[i];
            i++;
        }
    }
    return str2;
}

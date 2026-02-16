#include <stddef.h>
#include "libft.h"
#
char *ft_strrchr(const char *s, int c)
{
    int length = ft_strlen(s);
    while(length >= 0)
    {
        if(s[length] == (char)c)   
            return((char *)&s[length]);   
        length--;
    }
    return(0);
}








// size_t değişkenlerini while içinde kullanma int değerine ata öyle kullan
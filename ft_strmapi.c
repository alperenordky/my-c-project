#include "libt.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char    *ptr;

    if(!s)
        return(NULL);
    ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!ptr)
        return(NULL);
    while(s[i])
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return(str);
}

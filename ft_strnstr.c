#include "libft.h" 
size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    return (i);
}
char	*ft_strnstr(const char *p1, const char *p2, size_t len)
{
    size_t i;
    size_t j;
    size_t l;

    j = 0;
    i = 0;
    

    if (ft_strlen(p1) == 0 || ft_strlen(p2) == 0)
    {
        return (char *)p1;
    }
    while(i < len)
    {
        l = 0;
        if(p1[i] == p2[l])
        {
            j = i;
            while(p1[j] == p2[l])
            {
                j++;
                l++;
            }
            
        }
        if((j-i) == ft_strlen(p2))
        {
            return((char *)&p1[i]);
        }
        i++;
    }
}
#include <stdio.h>

int main()
{
    char p1[] = "merhaba dnya";
    char p2[] = "n";

    char *a = ft_strnstr(p1,p2,14);
    printf("%c",*a);
}












// yanlışlık var ve st_strncmp ile kolayca kontrol edilebilir 
// harfler eşleşdiğinde p2nin uzunluğu ile birlikte gönderilir ve kontrol edilir 

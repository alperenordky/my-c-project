int strncmp(const char *s1, const char *s2,unsigned int n)
{
    unsigned int i;

    i = 0;
    
    if(n == 0)
        return (0);

    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n-1)
    {
        i++;
    }
    return ((int)s1[i] - (int)s2[i]);

    
}

#include <stdio.h>

int main()
{
    char s1[] = "merhaba";
    char s2[] = "merhabp";

    int a = strncmp(s1,s2,6);
    printf("%d",a);
}
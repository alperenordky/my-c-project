#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    
    size_t i ;

    i = 0;
    while(i < n)
    {
        if(ptr[i] == (unsigned char)c)
            return &ptr[i];
        i++;
    }
    return (NULL);

}


#include <stdio.h>

int main()
{
    int deger[] = {256,3,9,4,0};

    char *a = ft_memchr(deger,1,20);
    printf("%d",a);
}



// 255 i aradğımızda bellek dizlimi şöyledir 
//               -> 11111111 00000000 00000000 00000000
//               ->   255        0        0        0
//               -> bulabileceği değerler bunlardır: 255 ve 0
//       
// 
// 
// 256'yı aradığımızda 
//               -> 00000001 00000001 00000000 00000000
//               ->     1       1         0        0
//               -> fonksiyonun bulabilrcrği değerler 1 ve 0
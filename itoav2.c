
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_bsmk(int a)
{
    int i = 0;

    if (a == 0)
        return (1);
    while (a != 0)
    {
        i++;
        a = a / 10;
    }
    return (i);
}

void ft_ekleme(char *ptr, int n, int size)
{
    if (size >= 0)
    {
        ptr[size] = (n % 10) + '0';
        ft_ekleme(ptr, n / 10, size - 1);
    }
}

char *ft_itoa(int n)
{
    char *ptr;
    int sign = 1;
    int len;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));

    if (n < 0)
    {
        sign = -1;
        n *= -1;
    }

    len = ft_bsmk(n) + (sign == -1);
    ptr = malloc(len + 1);
    if (!ptr)
        return (0);

    ptr[len] = '\0';
    ft_ekleme(ptr, n, len - 1);

    if (sign == -1)
        ptr[0] = '-';

    return (ptr);
}

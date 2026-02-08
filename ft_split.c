#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int word_count(const char *s, char c)
{
    int i = 0;
    int count = 0;

    while (s[i])
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            count++;
        i++;
    }
    return count;
}

char *ekleme(char *ptr, int first, int last)
{
    int total_len = last - first;
    char *s1;
    int i;

    s1 = malloc(total_len + 1);
    if (!s1)
        return NULL;

    i = 0;
    while (first < last)
    {
        s1[i] = ptr[first];
        i++;
        first++;
    }
    s1[i] = '\0';
    return s1;
}

char **ft_split(char const *s, char c)
{
    char **ptr;
    int words;
    int i = 0;
    int start = -1;
    int a = 0;

    if (!s)
        return NULL;

    words = word_count(s, c);
    ptr = malloc(sizeof(char *) * (words + 1));
    if (!ptr)
        return NULL;

    while (s[i])
    {
        if (s[i] != c && start < 0)
            start = i;
        else if ((s[i] == c || s[i + 1] == '\0') && start >= 0)
        {
            int end = (s[i] == c) ? i : i + 1;
            ptr[a++] = ekleme((char *)s, start, end);
            start = -1;
        }
        i++;
    }
    ptr[a] = NULL;
    return ptr;
}

int main()
{
    char s1[] = "cyber security world";
    char **ptr = ft_split(s1, ' ');

    int i = 0;
    while (ptr[i])
    {
        printf("%s\n", ptr[i]);
        i++;
    }
}


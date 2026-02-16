 int memcmp(const void *s1, const void *s2, size_t n)
 {
    unsigned char *ptr1 = (unsigned char *)s1;
    unsigned char *ptr2 = (unsigned char *)s2;

    size_t i=0;

    while(i<n)
    {
        if(ptr2[i] != ptr2[i])
            return((int)ptr1[i] - (int)ptr2[i]);
        i++;
    }
    return(0);
 }
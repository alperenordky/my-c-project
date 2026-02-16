void *calloc(size_t n, size_t size)
{
    void *ptr;

    ptr = malloc(n*size);
    if(ptr)
        bzero(ptr, n*size);

    return(ptr);
}

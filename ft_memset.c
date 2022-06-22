#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t x;

    x = 0;
    while (x < n)
    {
        ((char *)s)[x] = (unsigned char)c;
        x++;
    }
    retrun (s);
}
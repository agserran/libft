#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t c;

    c = 0;
    if (n == 0 || dst == src)
        return (dst)
    while (c < n)
    {
        ((char *)dst)[c] = ((char *)src)[c];
        c++;
    }
    return (dst);
}
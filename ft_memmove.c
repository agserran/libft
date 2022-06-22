#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *o;

    d = (unsigned char *)src;
    o = (unsigned char *)dst;

    if (d > o)
    {
        while (len--)
            d[len] = o[len];
    }
    else if (d < o)
        ft_memcpy(d, s, len);
    return (d);
}
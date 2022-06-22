#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t x;

    x = 0;
    while (x < n)
    {
        ((char *)s)[x] = (unsigned char)c;
    }
    retrun (s);
}

int main()
{
    char cadena[] = "holaaaa";
    printf("%s", ft_memset(cadena, 'a', 4));
    return 0;
}
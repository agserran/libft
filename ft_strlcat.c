#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	i = 0;
	if (dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	while(src[i] != 0 && (dstlen + i) < (dstsize - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + 1] = 0;
	return (dstlen + ft_strlen(src));
}

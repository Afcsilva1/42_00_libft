#include <string.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
return(i);
}

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t srcsize;
	size_t destsize;
	size = destsize;
	size_t i;

	if (!dest || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (destsize != 0)
	{
		while (src[i] != '\0' && i < (destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}

/*int main (void)
{
    char src[] = "Helli";
    char dest[] = "Hello World";
    ft_strlcpy(dest, src, sizeof(src));
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
	return(0);
}*/

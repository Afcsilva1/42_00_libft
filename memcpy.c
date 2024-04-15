#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *p_dest = dest;
    const unsigned char *p_src = src;
    size_t i;

    i = 0;
    while(i < n)
    {
        p_dest[i] = p_src[i];
        i++;
    }
    p_dest[i] = '\0';
    return(dest);
}

/*int main(void)
{

    char src[] = "Hello";
    char dest[10];
    ft_memcpy(dest, src, sizeof(src));

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    return 0;
}*/
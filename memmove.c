#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *p_dest = dest;
    const unsigned char *p_src = src;
    size_t i;
    i = 0;
    
    if (p_dest < p_src)
    {
        while(i < n)
        {
            p_dest[i] = p_src[i];
            i++;
        }
        p_dest[i] = '\0';
    }
    else if (p_dest > p_src)
    {
        i = n;
        while(i > 0)
        {
            p_dest[i -1] = p_src[i -1];
            i--;
        }
    }
    return(dest);
}

/*int main(void)
{

    char src[] = "Helli";
    char dest[] = "Hello World";
    ft_memmove(dest, src, sizeof(src));
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    return 0;
}*/
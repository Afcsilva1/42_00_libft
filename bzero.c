
#include <strings.h>
#include <stdio.h>
void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    unsigned char *p = s;
    unsigned char char_to_fill = (unsigned char)c;
    while(i < n)
    {
        p[i] = char_to_fill;
        i++;
    }
return(s);
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s,0,n);
}

/*int main(void)
{
    char string1[] = "Hello, world";
    printf("Before bzero: %s\n", string1);
    ft_bzero(string1, 5);
    printf("After bzero: %s\n", string1);
    return(0);
}*/
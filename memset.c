
#include <string.h>
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

/*int main(void)
{
    char string1[] = "Hello, world";
    printf("Before memset: %s\n", string1);
    ft_memset(string1, '*', 5);
    printf("After memset: %s\n", string1);
    return(0);
}*/

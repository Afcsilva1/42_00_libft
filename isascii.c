#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return(1);
    return(0);
}

/*int main (void)
{
    printf("%d\n", ft_isascii(50)); // Deve imprimir 1
    printf("%d\n", ft_isascii(100)); // Deve imprimir 1
    printf("%d\n", ft_isascii(150)); // Deve imprimir 0
    printf("%d\n", ft_isascii(200)); // Deve imprimir 0
    return(0);
}*/
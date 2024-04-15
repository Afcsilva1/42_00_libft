#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return(1);
    return(0);
}

/*int main (void)
{
    printf("%d\n", ft_isprint(50)); // Deve imprimir 1
    printf("%d\n", ft_isprint(100)); // Deve imprimir 1
    printf("%d\n", ft_isprint(150)); // Deve imprimir 0
    printf("%d\n", ft_isprint(200)); // Deve imprimir 0
    return(0);
}*/
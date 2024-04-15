#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return(1);
    return(0);
}

/*int main (void)
{
    printf("%d\n", ft_isdigit('a')); // Deve imprimir 0
    printf("%d\n", ft_isdigit('5')); // Deve imprimir 1
    printf("%d\n", ft_isdigit('C')); // Deve imprimir 0
    printf("%d\n", ft_isdigit('?')); // Deve imprimir 0
    return(0);
}*/
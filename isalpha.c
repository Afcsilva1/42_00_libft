#include <stdio.h>
#include <ctype.h>

int ft_is_lower(int a)
{
    if(a >= 'A'&& a <='Z')
        return('a');
}
int ft_isupper(int a)
{
    if(a >= 'a'&& a <='z')
        return('u');
}

int ft_isalpha(int c)
{
    if(ft_is_lower(c) == 'a' || ft_isupper(c) == 'u')
        return(1);
    return(0);
}

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return(1);
    return(0);
}

int ft_isalnum(int c)
{
    if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1 )
        return(1);
    return(0);
}
/*int main (void)
{
    printf("%d\n", ft_isalnum('a')); // Deve imprimir 1
    printf("%d\n", ft_isalnum('5')); // Deve imprimir 1
    printf("%d\n", ft_isalnum('C')); // Deve imprimir 1
    printf("%d\n", ft_isalnum('?')); // Deve imprimir 0
    return(0);
}*/
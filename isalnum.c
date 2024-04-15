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

/*int ft_isalpha(int c)
{
    if(ft_is_lower(c) == 'a' || ft_isupper(c) == 'u')
        return(1);
    return(0);
}*/
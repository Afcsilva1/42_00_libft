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

/*int main(void)
{
    char string1[] = "Hello";
    printf("%d\n", ft_strlen(string1));
}*/
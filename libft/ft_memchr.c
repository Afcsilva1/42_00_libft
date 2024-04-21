/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char		*p;

	p = (unsigned char *)s;

	while (n--)
	{
		if (*p++ == (unsigned char)c)
		{
			return (p -1);
		}
	}
	return (NULL);
}
/*int main() {
    // String de teste
    const char *str = "Hello, world!";
    // Byte a ser procurado
    char ch = 'o';
    // Tamanho da string
    size_t count = 13;

    // Chama a função memchr
    void *result = memchr(str, ch, count);

    if (result != NULL) {
        printf("O byte '%c'found pos. %ld.\n", ch, (char *)result - str);
    } else {
        printf("O byte '%c' não foi encontrado.\n", ch);
    }

    return 0;
}*/
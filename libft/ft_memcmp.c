/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (unsigned char *)dest;
	d2 = (unsigned char *)src;
	if (!n)
		return (0);
	while (--n && *d1 == *d2)
	{
		d1++;
		d2++;
	}
	return ((int)(*d1 - *d2));
}
/*int main() {
    // Duas strings para teste
    const char *str1 = "Hello";
    const char *str2 = "Hella";
    size_t n = 5; // Número de caracteres a serem comparados

    // Chamando a função memcmp para comparar as áreas de memória das strings
    int result = memcmp(str1, str2, n);

    // Verificando o resultado da comparação
    if (result == 0) {
        printf("As duas strings são iguais.\n");
    } else if (result < 0) {
        printf("A primeira string é lexicograficamente menor que a segunda.\n");
    } else {
        printf("A primeira string é lexicograficamente maior que a segunda.\n");
    }

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	i = 0;
	little_len = 0;
	if (*little == '\0')
		return ((char *)big);
	while (little[little_len] != '\0')
		little_len++;
	while (*big != '\0' && len >= little_len)
	{
		while (big[i] == little[i])
		{
			if (little[i + 1] == '\0')
				return ((char *)big);
			i++;
		}
		big++;
		len--;
	}
	return (NULL);
}
/*int main() {
    // String para teste
    const char *big = "Hello, world!";
    const char *little = "world";
    size_t len = 13; // Tamanho máximo da string big a ser considerado

    // Chamada da função strnstr
    char *result = strnstr(big, little, len);

    // Verifica o resultado da busca
    if (result != NULL) {
        printf("Substring encontrada em: %s\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}*/

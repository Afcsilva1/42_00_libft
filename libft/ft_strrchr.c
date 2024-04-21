/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    const char *str;

    str = s;
	while (*s)
		if (*s++ == (char)c)
			return ((char *)s - 1);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int main() {
    const char *str = "Hello, world!";
    char target = 'o';

    // Encontrar a última ocorrência do caractere 'o' na string
    char *last_occurrence = ft_strrchr(str, target);

    // Verificar se a função encontrou a última ocorrência
    if (last_occurrence != NULL) {
        printf("Última ocorrência de '%c' encontrada em '%s' na posição %ld\n",
               target, str, last_occurrence - str);
    } else {
        printf("Caractere '%c' não encontrado em '%s'\n", target, str);
    }

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i++] == (char)c)
			return ((char *)s - 1);
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main() {
    const char *str = "Hello, world!";
    char target = 'o';

    // Encontrar a primeira ocorrência do caractere 'o' na string
    char *first_occurrence = ft_strchr(str, target);

    // Verificar se a função encontrou a última ocorrência
    if (first_occurrence != NULL) {
        printf("Primeira ocorrência de '%c' encontrada em '%s' na posição %ld\n",
               target, str, first_occurrence - str);
    } else {
        printf("Caractere '%c' não encontrado em '%s'\n", target, str);
    }

    return 0;
}*/

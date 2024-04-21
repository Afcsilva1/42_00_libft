/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*new_str;

	length = ft_strlen(s);
	new_str = malloc(sizeof(char) * length + 1);
	if (new_str != NULL)
		ft_memcpy(new_str, s,length);
			return (new_str);
	return (NULL);
}

/*int main() {
    // String para teste
    const char *original = "Hello, world!";

    // Chama a função ft_strdup para duplicar a string
    char *duplicate = ft_strdup(original);

    // Verifica se a alocação foi bem-sucedida
    if (duplicate != NULL) {
        printf("String original: %s\n", original);
        printf("String duplicada: %s\n", duplicate);

        // Libera a memória alocada para a string duplicada
        free(duplicate);
    } else {
        printf("Falha ao duplicar a string.\n");
    }

    return 0;
}*/

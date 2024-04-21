/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if(!(s = malloc(count * size)))
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
/*int main() {
    // Teste com alocação de um array de inteiros
    size_t count = 5;
    size_t size = sizeof(int);
    int *array = (int *)ft_calloc(count, size);

    // Verifica se a alocação foi bem-sucedida
    if (array != NULL) {
        // Imprime os valores do array
        printf("Array de inteiros alocado com sucesso:\n");
        for (size_t i = 0; i < count; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");

        // Libera a memória alocada
        free(array);
    } else {
        printf("Falha ao alocar memória.\n");
    }

    return 0;
}*/

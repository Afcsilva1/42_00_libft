/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}
/*int main() {

    const char *string1 = "Hello";
    const char *string2 = "Hello";
    
    size_t n = 4;

    int result = ft_strncmp(string1, string2, n);
    
    if (result < 0) {
        printf("A string '%s' é menor que '%s'.\n", string1, string2);}
    if (result > 0) {
        printf("A string '%s' é maior que '%s'.\n", string1, string2);
    } else {
        printf("A string '%s' é igual a '%s'.\n", string1, string2);
    }

    return 0;
}*/

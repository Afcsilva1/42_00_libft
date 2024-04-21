/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = (unsigned char)c;
	return (s);
}

/*int main(void)
{
    char string1[] = "Hello, world";
    printf("Before memset: %s\n", string1);
    ft_memset(string1, '*', 5);
    printf("After memset: %s\n", string1);
    return(0);
}*/

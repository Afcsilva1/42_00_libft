/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char*)dest;
	p_src = (unsigned char*)src;
	if (!dest && !src)
		return (dest);
	while (n--)
		*p_dest++ = *p_src++;
	return (dest);
}

/*int main(void)
{

    char src[] = "Hello";
    char dest[10];
    ft_memcpy(dest, src, sizeof(src));

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    return 0;
}*/
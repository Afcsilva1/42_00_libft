/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:16:59 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/22 20:17:02 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p++ == (unsigned char)c)
			return (p -1);
	}
	return (NULL);
}

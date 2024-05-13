/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:18:03 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/22 20:18:05 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		size;
	char		*cp_str;

	size = (ft_strlen(s) + 1);
	cp_str = (char *)malloc(size * sizeof(char));
	if (!cp_str)
		return (NULL);
	ft_memcpy(cp_str, s, size);
	return (cp_str);
}

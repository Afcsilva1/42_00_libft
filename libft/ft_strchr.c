/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:17:50 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/22 20:17:51 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c1;
	int		i;
	int		end;

	i = 0;
	c1 = (char) c;
	end = ft_strlen(s);
	if (!c1)
		return ((char *)s + end);
	while (s[i])
	{
		if (s[i] == c1)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

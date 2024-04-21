/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:09:24 by acarvalh          #+#    #+#             */
/*   Updated: 2024/04/17 12:09:24 by acarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_lower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	return (0);
}

int	ft_isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if ((ft_is_lower(c) || (ft_isupper(c))))
		return (1);
	return (0);
}
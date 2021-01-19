/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 04:33:02 by abestaev          #+#    #+#             */
/*   Updated: 2021/01/17 02:55:41 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (!dst || !src)
		return (0);
	while (*src != '\0' && size - 1 != 0)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (ft_strlen((char*)src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 04:33:02 by abestaev          #+#    #+#             */
/*   Updated: 2021/01/15 14:54:38 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	while (*src != '\0' && size - 1 != 0)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (ft_strlen((char*)src));
}

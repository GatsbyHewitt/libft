/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:34:28 by abestaev          #+#    #+#             */
/*   Updated: 2021/01/10 02:23:06 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int p;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (const char)c)
			p = i;
		i++;
	}
	while (p != 0)
	{
		p--;
		s++;
	}
	return ((char*)s);
}

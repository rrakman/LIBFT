/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:05:27 by rrakman           #+#    #+#             */
/*   Updated: 2022/10/11 17:10:12 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;

	i = 0;
	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	if (size == 0)
		return (lens);
	if (size <= lend)
		return (lens + size);
	else
	{
		i = lend;
		while (*src && i + 1 < size)
		{
			dst[i++] = *(src++);
		}
		dst[i] = 0;
		return (lens + lend);
	}
}

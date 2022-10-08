/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:05:27 by rrakman           #+#    #+#             */
/*   Updated: 2022/10/08 01:39:46 by rrakman          ###   ########.fr       */
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
	if (!size)
		return (lens);
	if (size <= lend)
		return (lens + size);
	else
	{
		i = lend;
		while (*src && i < size - 1)
		{
			dst[i++] = *(src++);
		}
		dst[i] = 0;
		return (lens + lend);
	}
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	
	size_t	dlen;
	size_t	slen;
	size_t	r;
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	r = 0;
	i = 0;
	if (dstsize > dlen)
		r = slen + dlen;
	else
		r = slen + dstsize;
	while (src[i] != '\0' && (dlen + 1 < dstsize))
	{
		dst[dlen] = src[i];
		dlen++;
		i++;
	}
	dst[dlen] = '\0';
	return (r);
}
*/
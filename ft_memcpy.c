/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:43:48 by rrakman           #+#    #+#             */
/*   Updated: 2022/10/04 15:53:56 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char *) dst;
	source = (char *) src;
	if (!dest && !source)
		return (0);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

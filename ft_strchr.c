/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:53:36 by rrakman           #+#    #+#             */
/*   Updated: 2022/10/02 14:12:33 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	char	ch;

	i = 0;
	str = (char *)s;
	ch = (unsigned char) c;
	while (str[i])
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	if (ch == '\0')
		return (str + i);
	return (NULL);
}

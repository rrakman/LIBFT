/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:58:34 by rrakman           #+#    #+#             */
/*   Updated: 2022/10/05 17:55:42 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *) haystack;
	s2 = (char *) needle;
	i = 0;
	if (!*s2)
		return (s1);
	while (i < len && *s1)
	{
		j = 0;
		while (s1[j] == s2[j] && i < len)
		{
			if (s2[j + 1] == '\0')
				return (s1);
				j++;
				i++;
		}
		i++;
		s1++;
	}
	return ((void *)0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:19:41 by rrakman           #+#    #+#             */
/*   Updated: 2022/10/21 17:55:30 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	w_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**s42;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	s42 = (char **)malloc(sizeof(char *) * (w_count(s, c) + 1));
	if (!s42)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			s42[j] = ft_substr(s + i, 0, w_len(s + i, c));
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	s42[j] = NULL;
	return (s42);
}

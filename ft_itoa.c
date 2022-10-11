/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:56:57 by rrakman           #+#    #+#             */
/*   Updated: 2022/10/10 22:10:16 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	nb;
	size_t		len;
	char		*res;

	nb = n;
	len = ft_numlen(nb);
	res = ft_calloc(len + 1, 1);
	if (!res)
		return (0);
	if (nb == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		res[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekocak <ekocak@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:03:55 by ekocak            #+#    #+#             */
/*   Updated: 2022/04/08 10:41:38 by ekocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_numerics_signed(long long n, int base_length)
{
	int	i;

	i = 0;
	if (n == 0)
		return (++ i);
	while (n > 0)
	{
		n /= base_length;
		++ i;
	}
	return (i);
}

char	*ft_long_to_str(long long num, char *base)
{
	char	*buf;
	int		i;
	int		temp;
	int		base_length;

	base_length = ft_strlen(base);
	i = count_numerics_signed(num, base_length);
	buf = malloc(sizeof(*buf) * (i + 1));
	if (!buf)
		return (NULL);
	buf[i] = '\0';
	while (i)
	{
		temp = num % base_length;
		buf[-- i] = base[temp];
		num /= base_length;
	}
	return (buf);
}

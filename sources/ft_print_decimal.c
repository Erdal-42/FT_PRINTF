/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekocak <ekocak@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:28:26 by ekocak            #+#    #+#             */
/*   Updated: 2022/04/08 16:28:46 by ekocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int num)
{
	int		i;
	char	*str;

	i = 0;
	if (num < 0)
	{
		if (num == MINIMUM_INT)
			return (ft_print_string("-2147483648"));
		else
		{
			i += ft_print_char('-');
			num *= -1;
		}
	}
	str = ft_unlong_to_str(num, DEC);
	i += ft_print_string(str);
	free(str);
	return (i);
}

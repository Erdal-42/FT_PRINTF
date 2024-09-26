/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekocak <ekocak@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:31:23 by ekocak            #+#    #+#             */
/*   Updated: 2022/04/08 16:31:43 by ekocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_unsigned(unsigned long num, char *str)
{
	int		i;
	char	*pt;

	i = 0;
	pt = ft_unlong_to_str(num, str);
	i += ft_print_string(pt);
	free(pt);
	return (i);
}

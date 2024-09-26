/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekocak <ekocak@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:29:49 by ekocak            #+#    #+#             */
/*   Updated: 2022/04/08 18:17:35 by ekocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{	
	unsigned long	address;
	char			*str;
	int				i;

	i = 0;
	address = (unsigned long)ptr;
	i += ft_print_string("0x");
	str = ft_unlong_to_str(address, HEX_L);
	i += ft_print_string(str);
	free(str);
	return (i);
}

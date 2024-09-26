/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekocak <ekocak@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:33:38 by ekocak            #+#    #+#             */
/*   Updated: 2022/04/08 16:34:41 by ekocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_type(const char chr, va_list vals)
{
	int	rtn;

	rtn = 0;
	if (chr == 'c')
		rtn += ft_print_char(va_arg(vals, int));
	else if (chr == 's')
		rtn += ft_print_string(va_arg(vals, char *));
	else if (chr == 'p')
		rtn += ft_print_pointer(va_arg(vals, void *));
	else if (chr == 'd' || chr == 'i')
		rtn += ft_print_decimal(va_arg(vals, int));
	else if (chr == 'u')
		rtn += ft_print_unsigned(va_arg(vals, unsigned int), DEC);
	else if (chr == 'x')
		rtn += ft_print_unsigned(va_arg(vals, unsigned int), HEX_L);
	else if (chr == 'X')
		rtn += ft_print_unsigned(va_arg(vals, unsigned int), HEX_U);
	else if (chr == '%')
		rtn += ft_print_char(chr);
	return (rtn);
}

int	sub_printf(const char *string, va_list vals)
{
	int	rtn;
	int	i;

	rtn = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			rtn += ft_print_type(string[i + 1], vals);
			if (string[i + 1])
				i += 2;
			else
				i += 1;
		}
		else
			rtn += ft_print_char(string[i ++]);
	}
	return (rtn);
}

int	ft_printf(const char *string, ...)
{
	va_list	vals;
	int		rtn;

	if (!string)
		return (0);
	va_start(vals, string);
	rtn = sub_printf(string, vals);
	va_end(vals);
	return (rtn);
}

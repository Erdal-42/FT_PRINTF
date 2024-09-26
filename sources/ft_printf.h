/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekocak <ekocak@42kocaeli.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 08:27:53 by ekocak            #+#    #+#             */
/*   Updated: 2022/04/08 11:26:39 by ekocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*** INCLUDE FILES ***/
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>


/*** CONSTANT DEFINITIONS ***/
# define STDOUT			1
# define MINIMUM_INT	-2147483648
# define DEC			"0123456789"
# define HEX_L			"0123456789abcdef"
# define HEX_U			"0123456789ABCDEF"

/*** FUNCTION PROTOTYPES ***/
int		print_type(const char ch, va_list vals);
int		sub_printf(const char *string, va_list vals);
int		ft_printf(const char *string, ...);
int		ft_print_decimal(int num);
int		ft_print_unsigned(unsigned long num, char *str);
int		ft_print_pointer(void *ptr);
int		ft_print_string(char *str);
int		ft_print_char(char c);
char	*ft_unlong_to_str(unsigned long num, char *base);
char	*ft_long_to_str(long long num, char *base);
void	ft_putchar_fd(char c, int fd);
int     ft_strlen(char *);
void    ft_putchar_fd(char, int);
int		count_numerics(unsigned long long n, int base_length);
int		count_numerics_signed(long long n, int base_length);
#endif

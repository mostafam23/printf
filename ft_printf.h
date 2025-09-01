/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:26:20 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:26:21 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	check_exist(char symbol);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	print_number(long n);
int	handle_int(va_list *args);
int	handle_char(va_list *args);
int	handle_string(va_list *args);
int	handle_unsigned(va_list *args);
int	handle_pointer(va_list *args);
int	print_hex(unsigned long n, int uppercase);

#endif

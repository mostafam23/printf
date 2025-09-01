/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:26:15 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:26:16 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_conversion(char c, va_list *args)
{
	if (c == 'd' || c == 'i')
		return (handle_int(args));
	if (c == 'c')
		return (handle_char(args));
	if (c == 's')
		return (handle_string(args));
	if (c == '%')
		return (write(1, "%", 1));
	if (c == 'u')
		return (handle_unsigned(args));
	if (c == 'p')
		return (handle_pointer(args));
	if (c == 'x')
		return (print_hex(va_arg(*args, unsigned), 0));
	if (c == 'X')
		return (print_hex(va_arg(*args, unsigned), 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		printed;
	va_list	args;

	i = 0;
	printed = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && check_exist(format[i + 1]))
			printed += handle_conversion(format[++i], &args);
		else
			printed += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (printed);
}

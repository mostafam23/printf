/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_help3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:26:10 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:26:11 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string(va_list *args)
{
	char	*str;

	str = va_arg(*args, char *);
	return (ft_putstr(str));
}

int	handle_unsigned(va_list *args)
{
	unsigned int	n;
	int				count;

	n = va_arg(*args, unsigned int);
	count = 0;
	if (n >= 10)
		count += print_number(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	print_hex(unsigned long n, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase != 0)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += print_hex(n / 16, uppercase);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	handle_pointer(va_list *args)
{
	unsigned long	ptr;
	int				count;

	ptr = (unsigned long)va_arg(*args, void *);
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	count = 0;
	count += ft_putstr("0x");
	count += print_hex(ptr, 0);
	return (count);
}

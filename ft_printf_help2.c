/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_help2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:26:04 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:26:06 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(long n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_number(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	handle_int(va_list *args)
{
	long	n;
	int		count;

	n = va_arg(*args, int);
	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	count += print_number(n);
	return (count);
}

int	handle_char(va_list *args)
{
	char	c;

	c = va_arg(*args, int);
	return (ft_putchar(c));
}

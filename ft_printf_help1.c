/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_help1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moha <mel-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:25:59 by mel-moha          #+#    #+#             */
/*   Updated: 2025/05/31 12:26:00 by mel-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_exist(char symbol)
{
	const char	*valid = "cspdiuxX%";
	int			i;

	i = 0;
	while (valid[i])
	{
		if (valid[i] == symbol)
			return (1);
		i++;
	}
	return (0);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	count = 0;
	while (s[i])
		count += ft_putchar(s[i++]);
	return (count);
}

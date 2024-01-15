/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:29:40 by pfalli            #+#    #+#             */
/*   Updated: 2024/01/15 17:12:26 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_element(char element, va_list ap)
{
	int	count;

	if (element == 'c')
		count += ft_print_char(va_arg(ap, int));
	if (element == 's')
		return (ft_print_string(ap));
	if (element == 'd')
		return (ft_print_nbr(ap));
	if (element == 'i')
		return (ft_print_nbr(ap));
	if (element == 'p')
		return (ft_print_ptr(ap));
	if (element == 'u') 
		return (ft_print_u(ap));
	if (element == 'x')
		return (ft_print_hexa(ap));
	if (element == 'X')
		return (ft_print_H(ap));
	if (element == '%')
		return (ft_print_percentage(ap));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && (*format + 1) == 0)
			break ;
		else if (*format == '%')
			count += print_element(ap, *(format++));
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	ft_printf("Sono di Roma");
	return (0);
}
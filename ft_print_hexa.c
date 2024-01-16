/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:21:30 by pfalli            #+#    #+#             */
/*   Updated: 2024/01/16 13:12:02 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long num)
{
	if (num >= 16)
	{
		ft_print_hexa(num / 16);
		ft_print_hexa(num % 16);
	}
	else if (num < 10)
		ft_putchar_fd((num + 48), 1);
	else
		ft_putchar_fd((num + 87), 1);
	return (get_len(num));
}

//  int main()
//  {
//      unsigned long long number = 0xABCD12345678;
//
//      ft_print_hexa(number);
//
//      return (0);
//  }

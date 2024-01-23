/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:02:12 by pfalli            #+#    #+#             */
/*   Updated: 2024/01/23 15:27:41 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	void	ft_putchar_fd(char c, int fd)
//	{
//		write(fd, &c, 1);
//	}
//	
//	int	ft_print_string(char *string)
//	{
//		int	count;
//	
//		count = 0;
//		if (!string)
//			return (-1);
//		while (string[count])
//		{
//			write(1, &string[count], 1);
//			count++;
//		}
//		return (count);
//	}

int	get_len(unsigned long long num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}

int	ft_print_ptr(unsigned long num)
{
	int	len;

	if (num == 0)
		return (ft_print_string("0x0"));
	else
	{
		len = 0;
		len += ft_print_string("0x");
		ft_print_hexa(num);
		len += get_len(num);
		return (len);
	}
}

//	int	main(void)
//	{
//		int x = 666;
//		int *ptr = &x;
//	
//	    printf("%p\n", (void *)ptr);
//		
//	    ft_print_ptr((unsigned long long)ptr);
//		return (0);
//	}
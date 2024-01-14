/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:02:12 by pfalli            #+#    #+#             */
/*   Updated: 2024/01/11 18:02:12 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int get_len(unsigned long long num)
{
    int count = 0;

    while( num != 0)
    {
        count++;
        count = count / 16;
    }
    return(count);
}

int ft_put_ptr(unsigned long long num)
{
    if(num >= 16)
    {
        ft_put_ptr(num / 16);
        ft_ptt_ptr(num % 16);
    }
    else
    {
        if(num < 9)
            ft_putchar_fd((num + '0'), 1);
        else
            ft_putchar_fd((num - 10 + 'a'), 1);
    }
}

int ft_print_ptr



int main()
{
    int x = 666;
    int *ptr = &x;

    printf("%p\n", ptr);
    return(0);
}
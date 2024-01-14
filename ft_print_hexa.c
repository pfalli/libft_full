/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:21:30 by pfalli            #+#    #+#             */
/*   Updated: 2024/01/11 18:21:30 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_hexa(unsigned long long hexa) 
{
    char hex[17];

    // Convert the unsigned long long to a hexadecimal string
    int_to_hex(hexa, hex);

    int count = 0;
    while (hex[count] != '\0') 
    {
        ft_print_char(hex[count]);
        ++count;
    }
    return(count);
}


void int_to_hex(unsigned long long num, char hex[]) 
{
    int i = 0;

    while (num != 0) {
        hex[i++] = "0123456789abcdef"[num % 16];
        num /= 16;
    }

    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = hex[start];
        hex[start] = hex[end];
        hex[end] = temp;
        ++start;
        --end;
    }
    hex[i] = '\0';
}

//  int main() 
//  {
//      unsigned long long number = 0xABCD12345678;
//  
//      ft_print_hexa(number);
//  
//      return 0;
//  }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:36:46 by pfalli            #+#    #+#             */
/*   Updated: 2024/01/11 15:36:46 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_percentage (void)
{
    write(1, "%", 1);
    return(1);
}

int main()
{
    ft_print_percentage();
    return(0);
}
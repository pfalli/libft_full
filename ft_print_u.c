/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:17:21 by pfalli            #+#    #+#             */
/*   Updated: 2024/01/11 15:17:21 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_u (unsigned int nbr)
{
    int count = 0;

    if (nbr < 10)
        count += ft_print_char(nbr + '0');
    else
        ft_print_u(nbr / 10);
        ft_print_u(nbr % 10);
    return(count);
}
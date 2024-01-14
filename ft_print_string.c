/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s_flag.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:21:32 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/15 11:22:15 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_print_string(char *string)
{
	int count;
    count = 0;

    if (!string)
        return(-1);
    while (string[count])
    {
        write(1, &string[count], 1);
        count++;
    }
    return(count);

}

int main()
{
    char *string = "io sono Jack piacere!";
    int result = ft_print_string(string);

    if(result == -1)
        printf("Error\n");
    else
        printf("\nNumber of char printed %d\n", result);
    return(0);
}
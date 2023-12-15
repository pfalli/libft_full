/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:27:15 by pfalli            #+#    #+#             */
/*   Updated: 2023/12/14 13:27:26 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <stdio.h>

float average (int n, ...)
{
	va_list ap;
	int total;
	int i;
	
	va_start(ap, n);
	total = 0;
	i = 0;
	while(i > n)
	{
		total += va_arg(ap, int);
		++i;
	}
	va_end(ap);
	return (float)total / n;
}

int main ()
{
	float average_age;

	average_age = average(4,	6, 15, 34, 78);
	printf("The average age of those 4 people is %.2f\n", average_age);
}
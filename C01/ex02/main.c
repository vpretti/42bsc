/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:54:10 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/08 19:19:25 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_swap.c"

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	
	ft_swap(&x, &y);

	printf("valor de x = %d\n", x);
	printf("valor de y = %d\n", y);	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:03:35 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/11 16:56:39 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main()
{
	int numbers[7] = {4,2,9,10,5,8,6};
	int *pnumb = numbers;
	//int lennum = sizeof(numbers) / sizeof(numbers[0]);
	
	ft_rev_int_tab(pnumb, 7);
	printf("%d\n", numbers[7]);

	return(0);	
}

1 2 3 4 5 6  

6 5 4 3 2 1

6 5 4 3 2 1
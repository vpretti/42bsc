/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainrev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:37:51 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/03 20:43:23 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_reverse_alphabet.c"
#include "ft_print_reverse_alphabet.h"

int main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return(0);
}
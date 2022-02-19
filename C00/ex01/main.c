/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:22:44 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/03 21:12:45 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_alphabet.h"
#include "ft_print_alphabet.c"

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return(0);
}
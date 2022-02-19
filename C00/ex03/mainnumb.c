/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainnumb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:54:41 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/03 20:59:33 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_numbers.c"
#include "ft_print_numbers.h"

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return(0);
}
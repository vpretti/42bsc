/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maincomb2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:07:53 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/04 14:17:20 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_comb2.c"
#include "ft_print_comb2.h"

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}

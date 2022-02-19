/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainputchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:33:05 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/04 13:37:51 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.h"
#include "ft_putchar.c"

int	main(void)
{
	ft_putchar("z");
	write(1, "\n", 1);
}

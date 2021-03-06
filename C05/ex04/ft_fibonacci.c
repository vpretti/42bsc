/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:08:32 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/18 15:18:53 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int i)
{
	if (i < 0)
		return (-1);
	if (i == 0 || i == 1)
		return (i);
	return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}

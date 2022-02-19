/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:13:23 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/18 15:19:32 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	r = nb * ft_recursive_factorial(nb - 1);
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:14:52 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/18 15:10:23 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	counter = 3;
	while (counter <= (nb / counter))
	{
		if ((nb % counter) == 0)
			return (0);
		counter = counter + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb++;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb = nb + 2;
	return (nb);
}

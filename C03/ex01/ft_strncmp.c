/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:58:39 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/16 04:07:28 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				dif;

	i = 0;
	dif = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		dif = (s1[i] - s2[i]);
		i++;
		if (dif != 0)
		{
			return (dif);
		}
	}
	return (0);
}

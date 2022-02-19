/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:04:48 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/16 16:42:32 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 || *s2)
	{
		i = (*s1++ - *s2++);
		s1++;
		s2++;
		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}
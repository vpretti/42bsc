/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:21:31 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/17 15:16:11 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	d;

	while (*s1 || *s2)
	{
		d = (*s2++ - *s1++);
		if (d < 0)
			return (1);
		if (d > 0)
			return (-1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*temp;
	int		i;

	i = 0;
	while (++i < argc -1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) == 1)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}

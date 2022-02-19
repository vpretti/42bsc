/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:53:56 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/17 05:01:15 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	is_neg;

	i = 0;
	num = 0;
	is_neg = 1;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = is_neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - 48;
		i++;
	}
	return (num * is_neg);
}

#include <stdio.h>

int    main()
{
    //char s[] = "\n--++123q4";
    //char s[] = "\n--++12344";
    //char s[] = "\n--++12348797";
    //char s[] = "\n         --++1234";
    //char s[] = "1454652";
     printf("%d\n", ft_atoi(s));
    return (0);
}
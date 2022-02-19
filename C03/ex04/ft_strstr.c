/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:31:52 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/15 18:21:50 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	while (n-- > 0 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i = (*s1++ - *s2++);
		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	s;

	if (*to_find == '\0')
		return (str);
	s = ft_strlen(to_find);
	while (*str)
	{
		if ((*str == *to_find) && ft_strncmp(str, to_find, s) == 0)
			return (str);
		str++;
	}
	return ((void *)0);
}

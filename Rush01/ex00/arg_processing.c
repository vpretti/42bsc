/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_processing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 07:13:04 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/13 23:42:22 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "positions.h"

int	ft_is_space(char ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\n'
		|| ch == '\v' || ch == '\f' || ch == '\r');
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (ft_is_space(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		while (*str >= '0' && *str <= '9')
		{
			result = 10 * result - (int)(*str - '0');
			str++;
		}
		return (result);
	}
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * result + (int)(*str - '0');
		str++;
	}
	if (*str == '+')
		return (0);
	return (result);
}

int	array_atoi(char *start_words[16], int converted[16])
{
	int	offset;
	int	temp;

	offset = 0;
	while (offset < 16)
	{
		temp = ft_atoi(start_words[offset]);
		if (temp < 1 || temp > 4)
			return (ERROR);
		converted[offset] = temp;
		offset++;
	}
	return (SUCCESS);
}

int	split_args(char *args, char *start_words[16])
{
	char	*word_start;
	int		offset;
	int		in_word;

	offset = 0;
	in_word = 0;
	word_start = args;
	while (*args != '\0')
	{
		if (in_word && ft_is_space(*args))
		{
			start_words[offset++] = word_start;
			in_word = 0;
		}
		else if (!in_word && !ft_is_space(*args))
		{
			in_word = 1;
			word_start = args;
		}
		args++;
	}
	if (in_word)
		start_words[offset++] = word_start;
	return (offset);
}

int	process_args(char *args, t_constraint_set *constraints)
{
	int		i;
	int		converted[16];
	char	*start_words[16];

	i = 0;
	while (*(args + i) != '\0')
	{
		if ((*(args + i) < '1' || *(args + i) > '4')
			&& *(args + i) != '+' && !ft_is_space(*(args + i)))
			return (ERROR);
		i++;
	}
	if (split_args(args, start_words) != 16
		|| array_atoi(start_words, converted) == ERROR)
		return (ERROR);
	i = 0;
	while (i < 4)
	{
		constraints->top[i] = converted[i];
		constraints->bottom[i] = converted[i + 4];
		constraints->left[i] = converted[i + 8];
		constraints->right[i] = converted[i + 12];
		i++;
	}
	return (SUCCESS);
}

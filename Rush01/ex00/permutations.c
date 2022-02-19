/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 07:09:43 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/14 00:00:35 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "positions.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	get_perms_backtracking(int generated[24][4], int elements[4],
	int size, int *p_index)
{
	int	offset;

	if (size == 1)
	{
		offset = 0;
		while (offset < 4)
		{
			generated[(*p_index)][offset] = elements[offset];
			offset++;
		}
		(*p_index)++;
		return ;
	}
	else
	{
		offset = 0;
		while (offset < size)
		{
			swap(&elements[offset], &elements[size - 1]);
			get_perms_backtracking(generated, elements, size - 1, p_index);
			swap(&elements[offset], &elements[size - 1]);
			offset++;
		}
	}
}

void	get_permutations(int generated[24][4])
{
	int	elements[4];
	int	index;

	index = 0;
	while (index < 4)
	{
		elements[index] = index + 1;
		index++;
	}
	index = 0;
	get_perms_backtracking(generated, elements, 4, &index);
}

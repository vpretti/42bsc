/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_processing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:30:08 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/13 23:43:31 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "positions.h"

int	validate_from_start(int permutation[4], int constraint)
{
	int	boxes;
	int	tallest;
	int	offset;

	offset = 1;
	boxes = 1;
	tallest = permutation[0];
	while (offset < 4)
	{
		if (permutation[offset] > tallest)
		{
			tallest = permutation[offset];
			boxes++;
		}
		offset++;
	}
	if (boxes != constraint)
		return (ERROR);
	return (SUCCESS);
}

int	validate_from_end(int permutation[4], int constraint)
{
	int	boxes;
	int	tallest;
	int	offset;

	offset = 2;
	boxes = 1;
	tallest = permutation[3];
	while (offset >= 0)
	{
		if (permutation[offset] > tallest)
		{
			tallest = permutation[offset];
			boxes++;
		}
		offset--;
	}
	if (boxes != constraint)
		return (ERROR);
	return (SUCCESS);
}

int	is_permutation_valid(int permutation[4], int first_constraint,
	int second_constraint)
{
	if (validate_from_start(permutation, first_constraint) != SUCCESS
		|| validate_from_end(permutation, second_constraint) != SUCCESS)
		return (ERROR);
	return (SUCCESS);
}

int	get_valid_permutations_per_row(int valid[4][24], int permutations[24][4],
	t_constraint_set *constraints)
{
	int	permutation;
	int	row;
	int	one_valid;

	row = 0;
	while (row < 4)
	{
		permutation = 0;
		one_valid = 0;
		while (permutation < 24)
		{
			valid[row][permutation] = is_permutation_valid(
					permutations[permutation], constraints->left[row],
					constraints->right[row]);
			if (valid[row][permutation])
				one_valid = 1;
			permutation++;
		}
		if (!one_valid)
			return (ERROR);
		row++;
	}
	return (SUCCESS);
}

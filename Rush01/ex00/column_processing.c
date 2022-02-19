/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column_processing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 07:09:16 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/13 23:43:29 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "positions.h"
#include "proto.h"

void	fill_matrix(int matrix[4][4], int permutations[24][4], int selected)
{
	int	multiplier;
	int	row;
	int	col;
	int	index;

	row = 0;
	multiplier = 24 * 24 * 24;
	while (row < 4)
	{
		index = (selected % (multiplier * 24)) / multiplier;
		col = 0;
		while (col < 4)
		{
			matrix[row][col] = permutations[index][col];
			col++;
		}
		multiplier /= 24;
		row++;
	}
}

int	verify_unique(int seq[4])
{
	int	offset;
	int	map_numbers[4];

	offset = 0;
	while (offset < 4)
	{
		map_numbers[offset] = 0;
		offset++;
	}
	offset = 0;
	while (offset < 4)
	{
		if (map_numbers[seq[offset] - 1])
			return (0);
		map_numbers[seq[offset] - 1] = 1;
		offset++;
	}
	return (1);
}

int	verify_matrix(int matrix[4][4], t_constraint_set *constraints)
{
	int	row_number;
	int	col_number;
	int	col[4];

	col_number = 0;
	while (col_number < 4)
	{
		row_number = 0;
		while (row_number < 4)
		{
			col[row_number] = matrix[row_number][col_number];
			row_number++;
		}
		if (!verify_unique(col))
			return (ERROR);
		if (!is_permutation_valid(col, constraints->top[col_number],
				constraints->bottom[col_number]))
			return (ERROR);
		col_number++;
	}
	return (SUCCESS);
}

int	are_rows_valid(int valid_rows[4][24], int selected)
{
	int	row;
	int	multiplier;
	int	index;

	row = 0;
	multiplier = 24 * 24 * 24;
	while (row < 4)
	{
		index = (selected % (multiplier * 24)) / multiplier;
		if (!valid_rows[row][index])
			return (0);
		multiplier /= 24;
		row++;
	}
	return (1);
}

int	get_valid_columns(int valid_rows[4][24], int matrix[4][4],
	int permutations[24][4], t_constraint_set *constraints)
{
	int	selected;

	selected = 0;
	while (selected < 24 * 24 * 24 * 24)
	{
		if (are_rows_valid(valid_rows, selected))
		{
			fill_matrix(matrix, permutations, selected);
			if (verify_matrix(matrix, constraints))
				return (SUCCESS);
		}
		selected++;
	}
	return (ERROR);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:41:50 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/13 20:52:12 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "positions.h"
#include "proto.h"

void	draw_matrix(int matrix[4][4])
{
	int		row;
	int		col;
	char	digit;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 3)
		{
			digit = ('0' + (char)(matrix[row][col]));
			write(1, &digit, 1);
			write(1, " ", 1);
			col++;
		}
		digit = ('0' + (char)(matrix[row][3]));
		write(1, &digit, 1);
		write(1, "\n", 1);
		row++;
	}
}

int	main(int argc, char *argv[])
{
	t_constraint_set	constraints;
	int					perms[24][4];
	int					perms_per_row[4][24];
	int					matrix[4][4];

	if (argc != 2 || process_args(argv[1], &constraints) == ERROR)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	get_permutations(perms);
	if (get_valid_permutations_per_row(perms_per_row, perms, &constraints)
		&& get_valid_columns(perms_per_row, matrix, perms, &constraints))
	{
		draw_matrix(matrix);
		return (0);
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:51:22 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/13 23:44:01 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

// permutations.c
void	swap(int *a, int *b);
void	get_perms_backtracking(int generated[24][4], int elements[4],
			int size, int *p_index);
void	get_permutations(int generated[24][4]);
// row_processing.c
int		validate_from_start(int permutation[4], int constraint);
int		validate_from_end(int permutation[4], int constraint);
int		is_permutation_valid(int permutation[4], int first_constraint,
			int second_constraint);
int		get_valid_permutations_per_row(int valid[4][24],
			int permutations[24][4], t_constraint_set *constraints);
// column_processing.c
void	fill_matrix(int matrix[4][4], int permutations[24][4], int selected);
int		verify_unique(int seq[4]);
int		verify_matrix(int matrix[4][4], t_constraint_set *constraints);
int		are_rows_valid(int valid_rows[4][24], int selected);
int		get_valid_columns(int valid_rows[4][24], int matrix[4][4],
			int permutations[24][4], t_constraint_set *constraints);
// arg_processing.c
int		ft_is_space(char ch);
int		ft_atoi(char *str);
int		array_atoi(char *start_words[16], int converted[16]);
int		split_args(char *args, char *start_words[16]);
int		process_args(char *args, t_constraint_set *constraints);
// main.c
void	draw_matrix(int matrix[4][4]);
int		main(int argc, char *argv[]);
#endif
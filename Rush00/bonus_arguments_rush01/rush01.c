/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasantos <gasantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 23:50:16 by bbonaldi          #+#    #+#             */
/*   Updated: 2022/02/07 02:10:57 by gasantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

typedef struct s_characters {
	char	fst;
	char	scd;
	char	trd;
}	t_characters;

void	ft_start_end_print(t_characters chars, int col_pos, int columns)
{
	if (col_pos == 0)
	{
		ft_putchar(chars.fst);
	}
	else if (col_pos == columns - 1)
	{
		ft_putchar(chars.trd);
	}
	else
	{
		ft_putchar(chars.scd);
	}
}

void	ft_print_row(t_characters chars, int columns)
{
	int	col_pos;

	col_pos = 0;
	while (col_pos < columns)
	{
		ft_start_end_print(chars, col_pos, columns);
		col_pos++;
	}
	ft_putchar('\n');
}

void	ft_init_struct(t_characters *chars, char fst, char scd, char trd)
{
	chars->fst = fst;
	chars->scd = scd;
	chars->trd = trd;
}

void	rush(int x, int y)
{
	int				k;
	t_characters	fst_row;
	t_characters	middle_row;
	t_characters	last_row;

	ft_init_struct(&fst_row, '/', '*', '\\');
	ft_init_struct(&middle_row, '*', ' ', '*');
	ft_init_struct(&last_row, '\\', '*', '/');
	if (y > 0)
	{
		ft_print_row(fst_row, x);
	}
	k = 0;
	while (k < (y - 2))
	{
		ft_print_row(middle_row, x);
		k++;
	}
	if (y > 1)
	{
		ft_print_row(last_row, x);
	}
}

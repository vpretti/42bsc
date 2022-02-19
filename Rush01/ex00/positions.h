/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   positions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachado <gmachado@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 02:19:27 by gmachado          #+#    #+#             */
/*   Updated: 2022/02/13 14:53:26 by gmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POSITIONS_H
# define POSITIONS_H
# define SUCCESS 1
# define ERROR 0
# define DONE 1
# define NOT_DONE 0

typedef struct s_constraint_set
{
	int	top[4];
	int	bottom[4];
	int	left[4];
	int	right[4];
}	t_constraint_set;

#endif

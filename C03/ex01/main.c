/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 00:09:47 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/16 04:08:32 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncmp.c"
int main (void)
{
	char str1[15] = "Curso de C";
	char str2[15] = "Curso de Aava";
	int retorno;

	retorno = ft_strncmp(str1, str2, 10);
  
	printf("retorno = %d\n", retorno);
  
	return 0;
}
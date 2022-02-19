/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:09:10 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/15 18:25:35 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strncat.c"

int main (void)
{
  char str1[20] = "Curso";
  char str2[17] = " de programacao C";
  
  ft_strncat(str1, str2, 17);
  //concatena a string1 com 15 posições da string2
  
  printf("str1 = %s\n", str1);
  //Será exibido Curso de Programação
  
  return 0;
}
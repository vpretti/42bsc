/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:49:49 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/16 03:25:45 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcmp.c"

int ft_strcmp(char *s1, char *s2);

int main (void)
{
  char str1[4] = "abd";
  char str2[4] = "abc";
  int retorno;
  
  retorno = ft_strcmp(str1, str2);
  printf("retorno = %d\n", retorno);
  //mostra o retorno da função strcmp  
  
  return 0;
}
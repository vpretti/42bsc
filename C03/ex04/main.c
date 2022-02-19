/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:57:56 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/17 20:56:41 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"
 
int main(void)
{
   char *psResultado;
   char sFrase[] = "istttttto e um teste";
 
   printf("\nEndereço Inicial = %s", sFrase );
 
   /* A função retornará o endereço correspondente à localização do "to" */
   psResultado = ft_strstr(sFrase, "to");
 
   printf("\nEndereço inicial para a pesquisa = %s\n", psResultado );
   printf("\nEndereço inicial para a pesquisa = %s\n", psResultado );
   return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:43:10 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/15 14:11:08 by vpretti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *destino)
{
	int	i;

	i = 0;
	while (destino[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	l;
	int				dest_size;

	l = 0;
	dest_size = ft_strlen(dest);
	while (l < nb && src[l])
	{
		dest[l + dest_size] = src[l];
			l++;
	}
	dest[dest_size + l] = '\0';
	return (dest);
}

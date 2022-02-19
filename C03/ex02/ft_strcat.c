/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpretti <vpretti@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:04:50 by vpretti           #+#    #+#             */
/*   Updated: 2022/02/15 14:05:52 by vpretti          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	l;
	int				dest_size;

	l = 0;
	dest_size = ft_strlen(dest);
	while (src[l])
	{
		dest[l + dest_size] = src[l];
			l++;
	}
	dest[dest_size + l] = '\0';
	return (dest);
}

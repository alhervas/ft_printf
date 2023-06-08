/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:17:49 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:15:37 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (aux[i] == (unsigned char)c)
			return ((void *)&aux[i]);
		i++;
	}
	return (NULL);
}
/* // int	main(void)
// {
// 	//printf("%s\n",
			memchr("dthere is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0",
				'\0', 15));
// 	printf("%s",
			ft_memchr("gthere is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0",
				'\0', 15));
// } */
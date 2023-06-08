/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:29:07 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:16:44 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = 0;
	while (src[l] != '\0')
		l++;
	if (size != 0)
	{
		i = 0;
		while (i < (size - 1) && i < l)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (l);
}
/* int main(void)
{
	char src[]= "holaaaaaa";
	char dst[]="caracola";
   // printf("%lu\n", strlcpy(dst, src, 13));
	printf("%u\n", ft_strlcpy(dst, src, 13));
	return(0);
} */

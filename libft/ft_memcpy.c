/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:19:46 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:15:23 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst_cpy;
	const char	*src_cpy;

	dst_cpy = (char *)dest;
	src_cpy = (char *)src;
	i = 0;
	if (dest == src || !n)
		return (dest);
	while (n > i)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
	}
	return (dst_cpy);
}
// int	main(void)
// {
// 	char dest[100] = "holaaaaa";
// 	char src[10] = "que tal";

// 	memcpy(dest, src, 10);
// 	printf("%s\n", dest);
// 	// ft_memcpy(dest + 8, src, 10);
// 	// printf("%s", dest);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:11:10 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:15:49 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst_cpy;
	char	*src_cpy;

	dst_cpy = (char *)dest;
	src_cpy = (char *)src;
	if (dst_cpy < src_cpy)
	{
		while (n--)
			*dst_cpy++ = *src_cpy++;
	}
	else if (dst_cpy > src_cpy)
	{
		while (n--)
			dst_cpy[n] = src_cpy[n];
	}
	return (dest);
}
// int	main(void)
// {
// 	char dest[] = "holaaaaa";
// 	char src[] = "que tal";

// 	// memmove(dest, src, 5);
// 	// printf("%s\n", dest);
// 	ft_memmove(dest, src, 5);
// 	printf("%s", dest);
// 	return (0);
// }
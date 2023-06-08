/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:44:42 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:15:53 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (len > i)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
// int	main(void)
// {
// 	char cadena[] = "HOLAQUETAL";

// 	ft_memset(cadena, 'a', 3);

// 	printf("%s", cadena);

// 	return (0);
// }

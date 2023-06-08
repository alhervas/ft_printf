/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:47:39 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:20:55 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	size_t	i;

	i = 0;
	while (len > i)
	{
		((char *)b)[i] = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char cadena[] = "HOhaaehTAL";

// 	ft_bzero(cadena, 3);

// 	printf("%s", cadena);

// 	return (0);
// }
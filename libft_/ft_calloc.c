/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:05:53 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/14 18:51:52 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*dest;

	i = nmemb * size;
	dest = malloc(i);
	if (!(dest))
		return (0);
	ft_bzero(dest, i);
	return (dest);
}
/* int main()
{
    printf("%s\n", (char *)ft_calloc(12, 4));
    printf("%s\n", (char *)calloc(12, 4));
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:09:39 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:15:04 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
// int	main(void)
// {
// 	printf("%d", ft_isdigit('3'));
// }
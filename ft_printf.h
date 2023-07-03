/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:08:03 by alhervas          #+#    #+#             */
/*   Updated: 2023/05/03 18:08:04 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <./libft/libft.h>

void	ft_putchar(char c);
char	*ft_itoa(int n);
char	print_hex();
void	putstr(char *str);
int		ft_printf(char const	*str, ...);
#endif

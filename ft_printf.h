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

char	print_char();
int		print_int();
char	print_hex();
char	print_str();
int		ft_printf(char const	*str, ...);
#endif

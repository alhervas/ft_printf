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
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>


int		print_char(char c);
int		print_str(char *str);
int		print_utils(va_list args, char str);
int		ft_printf(char const	*str, ...);
int		print_num(int c);
int 	print_unsignednum (int c);
int 	print_percent(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_itoa(int n);
#endif

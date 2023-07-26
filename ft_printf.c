/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:24:43 by alhervas          #+#    #+#             */
/*   Updated: 2023/05/03 18:24:45 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_utils(va_list args, char str)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += print_char(va_arg (args, int));
	if (str == 's')
		len += print_str(va_arg (args, char *));
/* 	if (str == 'p')
		*/
 	if (str == 'i' || str == 'd')
		len += print_num(va_arg (args, int));
	if (str == 'u')
		len += print_unsignednum(va_arg (args, int));
/*	if (str == 'x')
		
	if (str == 'X')
		*/
	if (str == '%')
		len += print_percent(va_arg (args, int));
	return (len);
}
int	ft_printf(char const	*str, ...)
{
	int i;
	int len;
	va_list args;

	i = 0;
	len = 0;
	va_start (args, str);
	while(str[i] != '\0')
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
			{
				i++;
				len += printf_utils(args, str[i]);
			}
		else
			len += print_char(str[i]);
		i++;
	}
	va_end (args);
	return (len);
}
/* int	main()
{
	printf("%%\n", -55,99);
	ft_printf("%%", -55,99);
} */
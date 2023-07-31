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
		len += print_char(va_arg(args, int));
	if (str == 's')
		len += print_str(va_arg(args, char *));
	if (str == 'p')
		len += print_hex_p(va_arg(args, unsigned long));
	if (str == 'i' || str == 'd')
		len += ft_putnbr_fd(va_arg(args, int));
	if (str == 'u')
		len += ft_putnbr_fd_un(va_arg(args, unsigned int));
	if (str == 'x')
		len += print_hex(va_arg(args, unsigned int));
	if (str == 'X')
		len += print_HEX(va_arg(args, unsigned int));
	if (str == '%')
		len += print_char(str);
	return (len);
}
int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
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
	va_end(args);
	return (len);
}

/* int	main(void)
{
	printf("\n%i\n",printf("%p", -1));
	printf("\n%i",ft_printf("%p", -1));
} */
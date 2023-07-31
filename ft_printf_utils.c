/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:02:24 by alhervas          #+#    #+#             */
/*   Updated: 2023/07/03 14:02:26 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	int	i;

	i = 0;
	i = write(1, &c, 1);
	return (i);
}

int	print_str(char *str)
{
	int	a;
	int	i;

	i = 0;
	a = 0;
	if (!str)
		return (print_str(NULL));
	while (str[a] != '\0')
	{
		i = i + write(1, &str[a], 1);
		a++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int		a;
	char	aux;

	aux = c;
	a = 0;
	while ((char)str[a] != '\0')
	{
		if (((char *)str)[a] == aux)
		{
			return ((char *)&str[a]);
		}
		a++;
	}
	if (aux == '\0')
		return ((char *)&str[a]);
	return (NULL);
}
int	digits(int n)
{
	int	dig;
	int	numb;

	dig = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		dig++;
	}
	numb = n;
	while (numb > 0)
	{
		numb /= 10;
		dig++;
	}
	return (dig);
}

int	expon(int n)
{
	int	exponent;
	int	numb;

	exponent = 1;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	if (n < 0)
	{
		n *= -1;
	}
	numb = n;
	while (numb > 9)
	{
		numb /= 10;
		exponent *= 10;
	}
	return (exponent);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*result;
	int			exponent;
	long int	lngi;

	i = 0;
	lngi = (long int)n;
	exponent = expon(n);
	result = malloc(digits(n) + 1);
	if (!result)
		return (0);
	if (n < 0)
	{
		result[i++] = '-';
		lngi *= -1;
	}
	n = 0;
	while (exponent > 0)
	{
		result[i++] = ((lngi / exponent) - n) + 48;
		n = (lngi / exponent) * 10;
		exponent /= 10;
	}
	result[i] = '\0';
	return (result);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\r' || nptr[i] == '\t'
		|| nptr[i] == '\n' || nptr[i] == '\v' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result = result + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_putnbr_fd_un(unsigned long long n)
{
	char	un;
	int		len;

	len = 0;
	if (n >= 0)
	{
		un = (n % 10) + '0';
		n = (n / 10);
		if (n != 0)
			len += ft_putnbr_fd(n);
		len += write(1, &un, 1);
	}
	else
	{
		un = (n % 10) * -1 + '0';
		n = (n / 10);
		if (n != 0)
			len += ft_putnbr_fd(n);
		else
			len += write(1, "-", 1);
		len += write(1, &un, 1);
	}
	return (len);
}

int	ft_putnbr_fd(int n)
{
	char	un;
	int		len;

	len = 0;
	if (n >= 0)
	{
		un = (n % 10) + '0';
		n = (n / 10);
		if (n != 0)
			len += ft_putnbr_fd(n);
		len += write(1, &un, 1);
	}
	else
	{
		un = (n % 10) * -1 + '0';
		n = (n / 10);
		if (n != 0)
			len += ft_putnbr_fd(n);
		else
			len += write(1, "-", 1);
		len += write(1, &un, 1);
	}
	return (len);
}

char	print_hex(unsigned long n)
{
	char	rest;
	int		len;

	len = 0;
	if (n >= 0)
	{
		rest = (n % 16);
		n = (n / 16);
		if (n != 0)
			len += print_hex(n);
		if (rest >= 10)
			rest = (rest - 10) + 'a';
		else
			rest += '0';
		len += write(1, &rest, 1);
	}
	return (len);
}

char	print_HEX(unsigned long n)
{
	char	rest;
	int		len;

	len = 0;
	if (n >= 0)
	{
		rest = (n % 16);
		n = (n / 16);
		if (n != 0)
			len += print_HEX(n);
		if (rest >= 10)
			rest = (rest - 10) + 'A';
		else
			rest += '0';
		len += write(1, &rest, 1);
	}
	return (len);
}
char	print_hex_p(unsigned long n)
{
	char rest;
	int len;

	len = 0;
	len = len + write(1, "0x", 2);
	if (n >= 0)
	{
		rest = (n % 16);
		n = (n / 16);
		if (n != 0)
			len += print_hex(n);
		if (rest >= 10)
			rest = (rest - 10) + 'a';
		else
			rest += '0';
		len += write(1, &rest, 1);
	}
	return (len);
}
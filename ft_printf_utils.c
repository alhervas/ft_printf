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

int	print_num(int c)
{
	int i;
	char *num;

	i = 0;
	num = ft_itoa(c);
	i = print_str(num);
	return(i);
}

int print_unsignednum (int c)
{
	int i;
	int num;

	i = 0;
	num = c * -1;
	i = print_num(num);
	return (i);
}

int	print_char(char c)
{
	int i;

	i = 0;
	i = write (1, &c, 1);
	return (i);
}

int	print_str(char *str)
{
	int	a;
	int i;

	i = 0;
	a = 0;
	while (str[a] != '\0')
	{
		i = i + write(1, &str[a], 1);
		a++;
	}
	return(i);
}
int print_percent(int c)
{
	int i;

	i = 0;
	i = write(1, &c, 1);
	return(i);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:00:38 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/14 18:44:10 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/* int main()
{
    printf("%s\n", ft_itoa(-2147483648));
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:15:35 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:16:52 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	s1 = malloc(ft_strlen((char *)s) + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = f(i, (char)s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/* char *function(unsigned int b, char s)
{
    (void) b;
    while(s >= 'a' && s <= 'z')
        s -= 32;
    return(&s);
}
int	main(void)
{
    printf("%s\n", ft_strmapi("Hello World"))
} */
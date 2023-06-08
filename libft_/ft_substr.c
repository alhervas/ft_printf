/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:37:41 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:17:07 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	len_s;

	len_s = (size_t)ft_strlen((char *)s);
	if (len + start >= len_s)
		len = len_s - start;
	if (start >= len_s)
		return (ft_strdup(""));
	s2 = malloc(len + 1);
	if (!s2 || !s)
		return (NULL);
	i = 0;
	while (s[start] && len > i && len_s > start)
		s2[i++] = s[start++];
	s2[i] = '\0';
	return (s2);
}
/* int main()
{
    printf("%s\n", ft_substr("Hol que tal", 3, 500));
} */
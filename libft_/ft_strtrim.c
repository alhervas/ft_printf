/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:58:49 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:17:04 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[len]))
		len--;
	result = ft_substr(s1, i, (len - i) + 1);
	return (result);
}
/* int main()
{

	char *blabla = ft_strtrim("", "");
	printf("%s\n", blabla);
	return 0;
} */

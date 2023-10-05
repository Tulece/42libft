/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:57:56 by anporced          #+#    #+#             */
/*   Updated: 2023/10/04 20:45:06 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)s);
	while (s[i] && i < (int)len)
	{
		j = 0;
		k = i;
		while (s[k] == to_find[j] && k < (int)len)
		{
			k++;
			j++;
			if (to_find[j] == '\0')
				return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

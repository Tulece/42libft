/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:58:00 by anporced          #+#    #+#             */
/*   Updated: 2023/10/04 20:16:50 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	while (len > 0)
	{
		if (s[len - 1] == c)
			return ((char *)s + len - 1);
		len--;
	}
	return (NULL);
}

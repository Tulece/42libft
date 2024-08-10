/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:56:07 by anporced          #+#    #+#             */
/*   Updated: 2024/08/10 11:56:19 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_strcat(char *dest, const char *src)
{
	size_t	dstsize;
	int		i;

	i = 0;
	dstsize = ft_strlen(dest);
	if (!src || !dest)
		return ;
	while (src[i])
	{
		dest[dstsize + i] = src[i];
		i++;
	}
	dest[dstsize + i] = '\0';
}

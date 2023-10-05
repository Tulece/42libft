/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:57:23 by anporced          #+#    #+#             */
/*   Updated: 2023/10/04 20:19:52 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)

{
	int		i;
	char	*temp;
	char	*temp2;

	i = 0;
	temp = (char *)dest;
	temp2 = (char *)src;
	while (n > 0)
	{
		temp[i] = temp2[i];
		i++;
		n--;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 16:17:21 by anporced          #+#    #+#             */
/*   Updated: 2023/10/01 20:18:40 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)pointer;
	while (count > 0)
	{
		temp[i] = value;
		i++;
		count--;
	}
	return (pointer);
}

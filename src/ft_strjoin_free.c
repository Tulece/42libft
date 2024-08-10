/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:51:50 by anporced          #+#    #+#             */
/*   Updated: 2024/08/10 11:51:52 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin_free(char *s1, char *s2, int flag)
{
	size_t	size;
	char	*result;

	size = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc ((size + 1) * sizeof (char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, ft_strlen(s1) + 1);
	if (flag == 0 || flag == 2)
		free(s1);
	ft_strlcat(result, s2, size + 1);
	if (flag == 1 || flag == 2)
		free(s2);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:49:43 by anporced          #+#    #+#             */
/*   Updated: 2023/10/04 20:21:14 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	sign;
	int	i;
	int	res;

	sign = 1;
	i = 0;
	res = 0;
	if (!s)
		return (0);
	while ((s[i] >= 9 && s[i] <= 13) || (s[i] == 32))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * sign);
}
/*int	main(int ac, char **av)
{
	(void) ac;
	if (ac == 1)
		return (0);
	printf("%d\n", atoi(av[1]));
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:22:41 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/21 16:22:45 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	printf("%d\n", ft_str_is_numeric("Hello"));
//	printf("%d\n", ft_str_is_numeric("42"));
//	printf("%d\n", ft_str_is_numeric(""));
//	printf("%d\n", ft_str_is_numeric("adfg514d!"));
//	printf("%d\n", ft_str_is_numeric("ABCdef"));
//	return (0);
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:05:51 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/21 17:05:53 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	printf("%d\n", ft_str_is_lowercase("hello"));
//	printf("%d\n", ft_str_is_lowercase("Hello42"));
//	printf("%d\n", ft_str_is_lowercase(""));
//	printf("%d\n", ft_str_is_lowercase("abc!"));
//	printf("%d\n", ft_str_is_lowercase("ABCdef"));
//	return (0);
//}

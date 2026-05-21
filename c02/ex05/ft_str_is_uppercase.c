/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:18:47 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/21 17:18:49 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	printf("%d\n", ft_str_is_uppercase("hello"));
//	printf("%d\n", ft_str_is_uppercase("HELLO"));
//	printf("%d\n", ft_str_is_uppercase(""));
//	printf("%d\n", ft_str_is_uppercase("abc!"));
//	printf("%d\n", ft_str_is_uppercase("ABCdef"));
//	return (0);
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:48:34 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/21 15:48:37 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	printf("%d\n", ft_str_is_alpha("Hello"));
//	printf("%d\n", ft_str_is_alpha("Hello42"));
//	printf("%d\n", ft_str_is_alpha(""));
//	printf("%d\n", ft_str_is_alpha("abc!"));
//	printf("%d\n", ft_str_is_alpha("ABCdef"));
//	return (0);
//}

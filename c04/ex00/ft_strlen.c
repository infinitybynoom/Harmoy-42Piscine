/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 00:32:13 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/24 00:32:15 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

//int	main(void)
//{
//	printf("%d\n", ft_strlen("42"));
//	printf("%d\n", ft_strlen("Hello"));
//	printf("%d\n", ft_strlen(""));
//}

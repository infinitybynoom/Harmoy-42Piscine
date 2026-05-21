/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:40:18 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/21 17:40:21 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

//int	main(void)
//{
//	char	s1[] = "hello world";
//	char	s2[] = "Hello 42!";
//	char	s3[] = "already UPPER";
//	char	s4[] = "";

//	printf("\"hello world\"   -> \"%s\"\n", ft_strupcase(s1));
//	printf("\"Hello 42!\"     -> \"%s\"\n", ft_strupcase(s2));
//	printf("\"already UPPER\" -> \"%s\"\n", ft_strupcase(s3));
//	printf("\"\"              -> \"%s\"\n", ft_strupcase(s4));
//	return (0);
//}

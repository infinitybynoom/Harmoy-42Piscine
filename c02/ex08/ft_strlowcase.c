/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:12:45 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/21 18:12:49 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
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

//	printf("\"hello world\"   -> \"%s\"\n", ft_strlowcase(s1));
//	printf("\"Hello 42!\"     -> \"%s\"\n", ft_strlowcase(s2));
//	printf("\"already UPPER\" -> \"%s\"\n", ft_strlowcase(s3));
//	printf("\"\"              -> \"%s\"\n", ft_strlowcase(s4));
//	return (0);
//}

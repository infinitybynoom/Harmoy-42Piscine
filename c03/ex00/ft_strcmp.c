/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:35:52 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/23 13:35:55 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

//int	main(void)
//{
//	char	*s1 = "word";
//	char	*s2 = "Word";

//	printf("%d\n", strcmp(s1, s2));
//	printf("%d\n", ft_strcmp(s1, s2));
//}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 04:13:45 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/15 04:13:47 by harmoy           ###   ########.fr       */
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
//	char	*str = "Hello World";
//	int	len;

//	len = ft_strlen(str);
//	printf ("str: %s\nlen: %d\n", str, len);
//}

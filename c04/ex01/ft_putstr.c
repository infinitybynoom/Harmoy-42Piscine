/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 00:54:48 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/24 00:54:49 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

//int	main(void)
//{
//	ft_putstr("42\n");
//	ft_putstr("Hello, 42!\n");
//	ft_putstr("test\n");
//}

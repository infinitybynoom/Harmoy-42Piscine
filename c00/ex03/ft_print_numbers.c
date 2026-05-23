/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:57:19 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/18 02:12:17 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write (1, &number, 1);
		number++;
	}
	write (1, "\n", 1);
}

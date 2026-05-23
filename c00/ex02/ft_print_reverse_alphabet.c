/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:42:21 by harmoy            #+#    #+#             */
/*   Updated: 2026/04/22 17:51:39 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reaphb;

	reaphb = 'z';
	while (reaphb >= 'a')
	{
		write(1, &reaphb, 1);
		reaphb--;
	}
	write(1, "\n", 1);
}

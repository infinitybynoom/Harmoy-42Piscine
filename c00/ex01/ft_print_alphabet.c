/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:56:13 by harmoy            #+#    #+#             */
/*   Updated: 2026/04/22 17:21:59 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	aphb;

	aphb = 'a';
	while (aphb <= 'z')
	{
		write(1, &aphb, 1);
		aphb++;
	}
	write(1, "\n", 1);
}

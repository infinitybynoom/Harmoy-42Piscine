/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:46:26 by harmoy            #+#    #+#             */
/*   Updated: 2026/04/23 12:30:52 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_pair(int i, int j)
{
	char	ti;
	char	ui;
	char	tj;
	char	uj;

	ti = '0' + i / 10;
	ui = '0' + i % 10;
	write (1, &ti, 1);
	write (1, &ui, 1);
	write (1, " ", 1);
	tj = '0' + j / 10;
	uj = '0' + j % 10;
	write (1, &tj, 1);
	write (1, &uj, 1);
	if (i != 98 || j != 99)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_pair(i, j);
			j++;
		}
		i++;
	}
}

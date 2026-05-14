/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 02:36:11 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/15 02:36:13 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

//int	main(void)
//{
//	int	xa = 45;
//	int	xb = 5;
//	int	*a = &xa;
//	int	*b = &xb;

//	ft_ultimate_div_mod(a, b);
//	printf("%d%d\n", *a, *b);
//}

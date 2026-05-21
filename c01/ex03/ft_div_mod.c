/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 02:05:25 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/15 02:05:27 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int	a = 45;
//	int	b = 3;
//	int	*div = &a;
//	int	*mod = &b;

//	ft_div_mod(a, b, div, mod);
//	printf("%d%d\n", *div, *mod);
//}

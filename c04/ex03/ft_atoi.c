/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 03:25:34 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/24 03:25:36 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdbool.h>

int	ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (true);
	}
	if (c == '\v' || c == '\f' || c == '\r')
	{
		return (true);
	}
	return (false);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

//int	main(void)
//{
//	printf("%d\n", ft_atoi("  ---+--+123ab567"));
//	printf("%d\n", ft_atoi("42"));
//	printf("%d\n", ft_atoi(" +--+42"));
//	printf("%d\n", ft_atoi(" -+--42"));
//}

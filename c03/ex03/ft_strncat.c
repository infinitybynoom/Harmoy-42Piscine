/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmoy <harmoy@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 21:56:44 by harmoy            #+#    #+#             */
/*   Updated: 2026/05/23 21:56:47 by harmoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != !'0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	dest1[19] = "Sawaddee, ";
//	char	dest2[19] = "Sawaddee, ";

//	printf("%s\n", strncat(dest1, "Naja", 3));
//	printf("%s\n", ft_strncat(dest2, "Naja", 3));
//}

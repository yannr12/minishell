/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrio <yrio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:02:26 by yrio              #+#    #+#             */
/*   Updated: 2024/02/14 11:44:57 by yrio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0' || s[i] == (char)c)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int 	main(void)
{
	const char	*s = "bonjour";
	int 	c = 0;

	printf("ft_strchr : %s", ft_strchr(s, c));
	return (0);
}
*/
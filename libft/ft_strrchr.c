/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:45:08 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/05 17:14:36 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		lastc;
	int		i;
	char	*scpy;

	i = 0;
	lastc = -1;
	scpy = (char *)s;
	if ((char)c == '\0')
		return (&(scpy[ft_strlen(scpy)]));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			lastc = i;
		i++;
	}
	if (lastc == -1)
		return (NULL);
	return (&scpy[lastc]);
}

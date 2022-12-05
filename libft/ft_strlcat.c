/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:58:33 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/04 18:10:53 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;

	i = 0;
	j = 0;
	lendst = ft_strlen(dst);
	if (lendst < (dstsize - 1) && dstsize > 0)
	{
		while (dst[i] != '\0')
		{
			i++;
		}
		while (src[j] != '\0' && j < dstsize - lendst - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (lendst > dstsize)
		lendst = dstsize;
	return (lendst + ft_strlen(src));
}

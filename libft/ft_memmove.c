/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:01:06 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/03 19:54:39 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srccpy;
	char	*destcpy;

	srccpy = (char *) src;
	destcpy = (char *) dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	if (dest > src)
	{	
		while (n--)
		{
			destcpy[n] = srccpy[n];
		}	
	}
	else
	{
		while (i < n)
		{
			destcpy[i] = srccpy[i];
			i++;
		}
	}
	return (dest);
}

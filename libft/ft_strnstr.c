/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:29:23 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/06 19:16:47 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (j < len - i && haystack[i + j] && needle[j]
			&& (needle[j] == haystack[i + j]))
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// i va a recorrer haystack 
// j recorre needle funcion a buscar
//  The strnstr() function locates the first occurrence of the null-terminated 
//	string needlein the string haystack
// where not more than len characters are searched.  Characters that appear 
// after a `\0' character are not searched.
// Since the strnstr() function is a FreeBSD specific API, it should 
// only be used whenportability is not a concern.

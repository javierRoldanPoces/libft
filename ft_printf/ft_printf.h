/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:39:42 by jroldan-          #+#    #+#             */
/*   Updated: 2023/01/24 13:18:09 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

void	ft_putchar(char c, int *len);
int		ft_printf(char const *fnt, ...);
void	ft_putstr(char *s, int *len);
void	ft_putnbr_d_i(int nbr, int *len);
void	ft_putnbr_p(unsigned long nbr, char *base, int *len);
void	ft_putnbr_hex(unsigned int nbr, char *base, int *len, char *p);
void	ft_putnbr_unsigned_d(unsigned int nbr, int *len);
#endif

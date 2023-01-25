/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:39:31 by jroldan-          #+#    #+#             */
/*   Updated: 2023/01/25 17:33:10 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	*condition_num(char *p, va_list args, int *len)
{
	if (*p == 'p')
	{
		ft_putstr("0x", len);
		ft_putnbr_p(va_arg(args, unsigned long), "0123456789abcdef", len);
		p += 1;
	}
	else if (*p == 'x' || *p == 'X')
	{
		ft_putnbr_hex(va_arg(args, unsigned int), "0123456789abcdef", len, p);
		p += 1;
	}
	else if (*p == 'd' | *p == 'i')
	{
		ft_putnbr_d_i(va_arg(args, int), len);
		p += 1;
	}
	return (p);
}

static void	*condition(char *p, va_list args, int *len)
{
	if (*p == 'c')
	{
		ft_putchar(va_arg(args, int), len);
		p += 1;
	}
	else if (*p == 's')
	{
		ft_putstr(va_arg(args, char *), len);
		p += 1;
	}
	else if (*p == 'u')
	{
		ft_putnbr_unsigned_d(va_arg(args, unsigned int), len);
		p += 1;
	}
	else if (*p == '%')
	{
		ft_putchar('%', len);
	}
	else
		condition_num(p, args, len);
	return (p);
}

int	ft_printf(char const *fnt, ...)
{
	va_list	args;
	int		count;
	int		*len;
	char	*p;

	count = 0;
	len = &count;
	p = (char *)fnt;
	va_start(args, fnt);
	if ((write (1, "", 0) == -1))
		return (-1);
	while (*p != '\0')
	{	
		if (*p == '%')
		{
			p++;
			condition(p, args, len);
		}
		else
			ft_putchar(*p, len);
		p += 1;
	}
	va_end(args);
	return (*len);
}

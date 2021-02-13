/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:02:19 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/13 14:49:20 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_putstr(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (i);
	while (s[i])
		ft_putchar(s[i++]);
	return (i);
}

int		ft_putnstr(char *s, int to_print)
{
	int i;

	i = 0;
	if (!s)
		return (i);
	while (s[i] && i < to_print)
		ft_putchar(s[i++]);
	return (i);
}

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	len = 0;
	while (s1[len])
		len++;
	if (!(str = malloc(sizeof(*s1) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

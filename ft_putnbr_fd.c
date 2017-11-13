/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagalla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 11:33:11 by amagalla          #+#    #+#             */
/*   Updated: 2017/05/25 11:33:12 by amagalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	int min;

	min = 0;
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		if (c == -2147483648)
		{
			min = 1;
			c = 2147483647;
		}
		else
			c = c * -1;
	}
	if (c >= 10)
		ft_putnbr_fd(c / 10, fd);
	ft_putchar_fd((c % 10 + min) + '0', fd);
}

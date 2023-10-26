/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:02:39 by klopez            #+#    #+#             */
/*   Updated: 2023/08/26 22:16:04 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_first(int x)
{
	int	i;

	i = x - 2;
	if (x <= 0)
	{
		return ;
	}
	if (x == 1)
	{
		ft_putchar('/');
	}
	if (x >= 2)
	{
		ft_putchar('/');
		while (i > 0)
		{
			ft_putchar('*');
			i--;
		}
		ft_putchar('\\');
	}
}

void	print_last(int x)
{
	int	i;

	i = x - 2;
	if (x <= 0)
	{
		return ;
	}
	if (x == 1)
	{
		ft_putchar('\\');
	}
	if (x >= 2)
	{
		ft_putchar('\\');
		while (i > 0)
		{
			ft_putchar('*');
			i--;
		}
		ft_putchar('/');
	}
}

void	print_corps(int x)
{
	int	i;

	i = x - 2;
	if (x <= 0)
	{
		return ;
	}
	if (x == 1)
	{
		ft_putchar('*');
	}
	if (x >= 2)
	{
		ft_putchar('*');
		while (i > 0)
		{
			ft_putchar(' ');
			i--;
		}
		ft_putchar('*');
	}
}

void	rush(int x, int y)
{
	int	i;

	i = y - 2;
	if (y == 1)
	{
		print_first(x);
		ft_putchar('\n');
	}
	if (y >= 2)
	{
		print_first(x);
		ft_putchar('\n');
		while (i > 0)
		{
			print_corps(x);
			ft_putchar('\n');
			i--;
		}
		print_last(x);
		ft_putchar('\n');
	}
}

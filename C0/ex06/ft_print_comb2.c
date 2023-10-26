/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:50:24 by klopez            #+#    #+#             */
/*   Updated: 2023/09/12 13:44:51 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	write(1, " ", 1);
	ft_putchar(c);
	ft_putchar(d);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write (1, ", ", 2);
}

void	ft_while(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_write(a, b, c, d);
					d++;
				}
				c++;
				d = '0';
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_while(a, b, c, d);
}

int	main(void)
{
	ft_print_comb2();
}

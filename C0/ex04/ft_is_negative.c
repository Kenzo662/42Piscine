/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:48:00 by klopez            #+#    #+#             */
/*   Updated: 2023/08/23 15:57:00 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
/*int	main(void)
{
	int a = -6;
	int b = 5;
	int c = 0;
	ft_is_negative(a);
	ft_is_negative(b);
	ft_is_negative(c);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:22:50 by klopez            #+#    #+#             */
/*   Updated: 2023/09/06 14:39:54 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	i = 1;
	p = nb;
	while (i < power)
	{
		p *= nb;
		i++;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (p);
}
/*int	main(void)
{
	int result = ft_iterative_power(5, 3);
	printf("%d\n", result);
}*/

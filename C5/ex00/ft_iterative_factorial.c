/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:07:15 by klopez            #+#    #+#             */
/*   Updated: 2023/09/06 16:43:36 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	while (i <= nb)
	{
		f *= i;
		i++;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (f);
}
/*int	main(void)
{
	int nbr = 8;
	int result = ft_iterative_factorial(nbr);
	printf("%d\n", result);
}*/

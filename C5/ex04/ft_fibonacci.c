/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:12:01 by klopez            #+#    #+#             */
/*   Updated: 2023/09/06 16:30:51 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*int	main(void)
{
	int result = ft_fibonacci(6);
	printf("%d\n", result);
}*/

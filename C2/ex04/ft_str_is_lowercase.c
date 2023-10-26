/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:06:50 by klopez            #+#    #+#             */
/*   Updated: 2023/08/29 13:58:04 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char a[] = "yobgcava";
	char b[] = "YoBGcAvA";
	char c[] = "";
	int result = ft_str_is_lowercase(b);
	printf("%d\n", result);
}*/

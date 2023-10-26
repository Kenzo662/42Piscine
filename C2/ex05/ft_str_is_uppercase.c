/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:13:29 by klopez            #+#    #+#             */
/*   Updated: 2023/08/31 01:08:19 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char a [] = "BONJOUR";
	char b [] = "";
	int result = ft_str_is_uppercase(a);
	int result1 = ft_str_is_uppercase(b);
	printf("%d\n%d\n", result, result1);
}*/

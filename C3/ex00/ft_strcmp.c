/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:50:35 by klopez            #+#    #+#             */
/*   Updated: 2023/09/02 19:42:47 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char a [] = "ekrketktek";
	char b [] = "ewkqekwkejtej";
	int result = ft_strcmp(a, b);
	int result1 = strcmp(a, b);
	printf("%d\n", result);
	printf("%d\n", result1);
}*/

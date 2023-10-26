/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:47:29 by klopez            #+#    #+#             */
/*   Updated: 2023/09/02 19:23:20 by klopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;
	i = i + 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i - 1] >= 0 && str[i - 1] <= 47) && \
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((str[i - 1] >= 58 && str[i - 1] <= 64) && \
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((str[i - 1] >= 91 && str[i - 1] <= 96) && \
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((str[i - 1] >= 123 && str[i - 1] <= 126) && \
				(str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char a [] = "salut, comment tu vas ? 42mots quarante-deux; ciquante+et+un";
	//char b [] = "SALUT, COMMENT TU VAS ? 42MOTS QUARANTE-DEUX; CINQUANTE+ET+UN";
	char b [] = "4salut";
	ft_strcapitalize(b);
	printf("%s\n", b);
}*/

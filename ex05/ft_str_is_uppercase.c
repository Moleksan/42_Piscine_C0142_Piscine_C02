/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:47:22 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/27 00:23:16 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65) && (str[i] <= 90)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "ALEX";
// 	char	str1[] = "16";
// 	char	str2[] = "";

// 	printf("str %d\n", ft_str_is_uppercase(str));
// 	printf("str1 %d\n", ft_str_is_uppercase(str1));
// 	printf("str2 %d\n", ft_str_is_uppercase(str2));
// 	return (0);
// }

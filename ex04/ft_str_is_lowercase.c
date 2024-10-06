/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:43:55 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/27 00:27:10 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "alex";
// 	char	str1[] = "Alex16";
// 	char	str2[] = "";

// 	printf("str %d\n", ft_str_is_lowercase(str));
// 	printf("str1 %d\n", ft_str_is_lowercase(str1));
// 	printf("str2 %d\n", ft_str_is_lowercase(str2));
// 	return (0);
// }

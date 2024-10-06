/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:12:27 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/26 17:28:46 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a') && (str[i] <= 'z'))
			if (!(str[i] >= 'A') && (str[i] <= 'Z'))
				return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "Alex";
// 	char	str1[] = "Alex16";
// 	char	str2[] = "";

// 	printf("str %d\n", ft_str_is_alpha(str));
// 	printf("str1 %d\n", ft_str_is_alpha(str1));
// 	printf("str2 %d\n", ft_str_is_alpha(str2));
// 	return (0);
// }

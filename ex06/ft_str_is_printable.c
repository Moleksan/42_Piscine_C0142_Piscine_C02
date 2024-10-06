/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:50:20 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/27 00:27:25 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "ALEX";
// 	char	str1[] = "alex16\n";
// 	char	str2[] = "";

// 	printf("str %d\n", ft_str_is_printable(str));
// 	printf("str1 %d\n", ft_str_is_printable(str1));
// 	printf("str2 %d\n", ft_str_is_printable(str2));
// 	return (0);
// }

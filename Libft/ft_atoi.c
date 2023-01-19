/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:34:02 by thbui             #+#    #+#             */
/*   Updated: 2023/01/19 13:40:25 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)	//this atoi works only with one "+" or "-"
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;	//for when the number is neg multiply *= -1 and make it pos to work with it further
	result = 0;	//here the number will be saved
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;			//so the last number is 0 and you can add the number to the result;
		result += str[i] - '0';	// - '0' substraction of ascii value, converting int to char;
		i++;
	}
	return (result * sign);
}

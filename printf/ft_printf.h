/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:42:38 by thbui             #+#    #+#             */
/*   Updated: 2023/01/26 21:54:19 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

// typedef struct s_print
// {
// 	va_list	args;		//arg to print out
// 	int	zeros;
// 	int	width;
// 	int	precision;
// 	int	dash;
// 	int	period;
// 	int	sign;			//pos or neg
// 	int	space;
// 	int	is_zero;
// 	int	percent;
// 	int	lenght;
// }	t_print;

int			ft_printf(const char *str, ...);
int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putnbr(int n);
int			ft_print_address(uintptr_t nb);
int			print_hex(unsigned long int nb);
int			ft_uns_decimal(unsigned int nb);
int			ft_hexadecimal(unsigned int nb, char spc);

#endif

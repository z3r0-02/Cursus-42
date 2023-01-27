/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:42:38 by thbui             #+#    #+#             */
/*   Updated: 2023/01/27 16:25:13 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int			ft_printf(const char *str, ...);
int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_len(uintptr_t nb);
int			ft_putnbr(int n);
int			ft_print_address(uintptr_t nb);
int			ft_uns_decimal(unsigned int nb);
int			ft_hexadecimal(unsigned int nb, char spc);
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
#endif

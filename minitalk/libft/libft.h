/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:42:38 by thbui             #+#    #+#             */
/*   Updated: 2023/05/08 15:31:07 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>
# include <signal.h>

int			ft_printf(const char *str, ...);
int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_len(uintptr_t nb);
int			ft_putnbr(int n);
int			ft_print_address(uintptr_t nb);
int			ft_uns_decimal(unsigned int nb);
int			ft_hexadecimal(unsigned int nb, char spc);
char		*ft_strchr(const char *s, int c);

#endif

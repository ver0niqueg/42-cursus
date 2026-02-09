/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:10:19 by vgalmich          #+#    #+#             */
/*   Updated: 2024/06/20 15:40:30 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include "./libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_print_string(char *s, int *counter);

void	ft_print_int(int value, int *counter);
void	ft_print_unsigned(unsigned int value, int *counter);
void	ft_print_hexa(unsigned int value, const char c, int *counter);
void	ft_print_pointer(unsigned long long value, int *counter);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dide-jes <dide-jes@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:40:28 by dide-jes          #+#    #+#             */
/*   Updated: 2025/11/25 13:22:40 by dide-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>

int	ft_putaddres(unsigned long n, int count);
int	ft_checkaddres(void *n, int count);
int	ft_putnbr_base(unsigned int n, char *base, int count);
int	ft_printf(const char *format, ...);

#endif
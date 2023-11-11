/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fmt_ptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:49:45 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 17:49:46 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int ft_print_fmt_ptr(va_list *arg)
{
	uint64_t ptr;

	ptr = va_arg(*arg, uint64_t);
	write(1, "0x", 2);
	return (2 + ft_uputnbr_base(ptr, "0123456789abcdef", 16));
}

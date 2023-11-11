/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fmt_lhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:49:38 by pollivie          #+#    #+#             */
/*   Updated: 2023/11/03 17:49:39 by pollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int ft_print_fmt_lhex(va_list *arg)
{
	uint32_t lhex;

	lhex = va_arg(*arg, uint32_t);
	return (ft_uputnbr_base((uint32_t) lhex, "0123456789abcdef", 16));
}

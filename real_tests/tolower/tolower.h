/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:54:05 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:54:06 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOLOWER_H
# define TOLOWER_H
# define TEST_SUCCESS 0
# define TEST_FAILURE -1

# include "../../libft/libft.h"
# include "../../framework/libunit.h"

int	tolower_launcher(void);
int	tolower_basic_test(void);
int	tolower_symbol_test(void);
int	tolower_lowercase_test(void);
int	tolower_digit_test(void);

#endif

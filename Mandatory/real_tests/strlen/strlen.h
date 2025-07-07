/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:07:10 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 18:07:13 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_H
# define STRLEN_H
# define TEST_SUCCESS 0
# define TEST_FAILURE -1

# include "../../framework/libunit.h"
# include "../../libft/libft.h"
# include <string.h>

int	strlen_basic_test(void);
int	strlen_null_test(void);
int	bigger_str_test(void);
int	strlen_launcher(void);

#endif

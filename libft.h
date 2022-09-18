/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:33:59 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/18 19:55:51 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif
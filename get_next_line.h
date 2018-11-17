/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 15:53:08 by lufranco          #+#    #+#             */
/*   Updated: 2017/12/26 14:07:45 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
**$================{LIBRARY}================$
*/
# include <limits.h>
# include "./libft/libft.h"

/*
**$================{DEFINE}=================$
*/
# define BUFF_SIZE 42
# define X '\n'

/*
**$================{PROTOTYPE}==============$
*/
int		get_next_line(const int fd, char **line);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:04:27 by beroy             #+#    #+#             */
/*   Updated: 2023/11/06 15:34:45 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c < 48
		|| (c > 57 && c < 65)
		|| (c > 90 && c < 97)
		|| c > 122)
		return (0);
	return (1);
}

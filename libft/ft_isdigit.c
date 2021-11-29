/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phella <phella@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:52:31 by phella            #+#    #+#             */
/*   Updated: 2021/10/16 14:06:17 by phella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return (ch);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_vec.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjarross <tjarross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/29 17:05:06 by tjarross          #+#    #+#             */
/*   Updated: 2016/09/11 13:56:57 by tjarross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_VEC_H
# define LIB_VEC_H

# include <math.h>

typedef struct	s_vec
{
	double		x;
	double		y;
	double		z;
}				t_vec;

t_vec			normalize(t_vec v);
double			dot(t_vec v1, t_vec v2);
double			get_dist(t_vec v);
t_vec			rot(t_vec v, double hor_angle, double vert_angle);
t_vec			multiply_vec(t_vec v, double n);
t_vec			sub_vec(t_vec v1, t_vec v2);
t_vec			add_vec(t_vec v1, t_vec v2);
t_vec			div_vec(t_vec v1, double n);
t_vec			dot_div(t_vec v1, t_vec v2);
t_vec			not_vec(t_vec v);
t_vec			get_inters(t_vec origin, t_vec raydir, double t);
t_vec 			product_vec(t_vec v1, t_vec v2);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normals.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:23:00 by smamba            #+#    #+#             */
/*   Updated: 2016/07/31 15:36:03 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/tracer.h"

t_vec3f	sphere_normal(t_vec3f *phit, t_vec3f *pos)
{
	t_vec3f	nhit;

	nhit = sub_vec3f(phit, pos);
	return (normal_vec3f(&nhit));
}

t_vec3f	cylinder_normal(t_vec3f *phit, t_vec3f *pos)
{
	t_vec3f	nhit;

	nhit = sub_vec3f(phit, pos);
	return (normal_vec3f(&nhit));
}

t_vec3f	plane_normal(t_vec3f *phit, t_vec3f *pos)
{
	return (sphere_normal(phit, pos));
}

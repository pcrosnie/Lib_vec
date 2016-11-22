#include "rtv1.h"

float	cast_ray(t_obj *tmp, t_vec raydir, t_vec dist)
{
	float t;

	t = MAX_FLOAT;
	if (tmp->type == CONE)
		t = inter_cone(tmp, dist, raydir);
	else if (tmp->type == PLANE)
		t = inter_plane(tmp, dist, raydir);
	else if (tmp->type == SPHERE)
		t = inter_sphere(tmp, dist, raydir);
	else
		t = inter_cylinder(tmp, dist, raydir);
	return (t);
}

#include "rt.h"

float		inter_plane(t_obj *obj, t_vec dist, t_vec raydir)
{
	float t;

	t = -(dist.x * obj->dir.x + dist.y * obj->dir.y + dist.z * obj->dir.z)
		/ (raydir.x * obj->dir.x + raydir.y * obj->dir.y + raydir.z * obj->dir.z);
	return (t >= 0 ? t : MAX_DOUBLE);
}

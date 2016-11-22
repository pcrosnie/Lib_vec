#include "lib_vec.h"

double	get_dist(t_vec v)
{
	return (sqrtf(dot(v, v)));
}

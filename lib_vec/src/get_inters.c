#include "lib_vec.h"

t_vec	get_inters(t_vec origin, t_vec raydir, double t)
{
	return (add_vec(origin, multiply_vec(raydir, t)));
}

#include "lib_vec.h"

t_vec	not_vec(t_vec v)
{
	v.x = -v.x;
	v.y = -v.y;
	v.z = -v.z;
	return (v);
}

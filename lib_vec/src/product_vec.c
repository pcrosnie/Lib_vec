#include "lib_vec.h"

t_vec product_vec(t_vec v1, t_vec v2)
{
	t_vec v;

	v.x = v1.x * v2.x;
	v.y = v1.y * v2.y;
	v.z = v1.z * v2.z;
	return (v);
}

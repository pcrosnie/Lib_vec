#include "lib_vec.h"

t_vec	multiply_vec(t_vec v, double n)
{
	v.x *= n;
	v.y *= n;
	v.z *= n;
	return (v);
}

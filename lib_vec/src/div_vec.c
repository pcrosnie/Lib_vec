#include "lib_vec.h"

t_vec	div_vec(t_vec v1, double n)
{
	v1.x /= n;
	v1.y /= n;
	v1.z /= n;
	return (v1);
}

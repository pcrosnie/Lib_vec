#include "lib_vec.h"

t_vec	normalize(t_vec v)
{
	return (div_vec(v, sqrtf(dot(v, v))));
}

#include "lib_vec.h"

t_vec	rot(t_vec v, double hor_angle, double vert_angle)
{
	double tmpx;
	double tmpy;
	double tmpz;

	tmpz = v.z;
	tmpx = v.x;
	tmpy = v.y;
	v.y = (v.y * cos(hor_angle)) - (v.z * sin(hor_angle));
	v.z = (tmpy * sin(hor_angle)) + (v.z * cos(hor_angle));
	tmpx = v.x;
	v.x = (v.x * cos(vert_angle)) + (v.z * sin(vert_angle));
	v.z = (tmpx * (-sin(vert_angle))) + (v.z * cos(vert_angle));
	return (v);
}

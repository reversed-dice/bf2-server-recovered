// FUNCTION: BF2 0x6d4610
// BF2_FLAGS: -fcrossjumping
#include <math.h>

namespace maya {

class AwVector
{
public:
	double x;
	double y;
	double z;
	AwVector& normalize();
};

class AwQuaternion
{
public:
	double x;
	double y;
	double z;
	double w;
	static AwQuaternion identity;
	AwQuaternion& setAxisAngle(AwVector const& axis, double angle);
};

}

maya::AwQuaternion& maya::AwQuaternion::setAxisAngle(maya::AwVector const& axis, double angle)
{
	double t = axis.x * axis.x + axis.y * axis.y + axis.z * axis.z;
	if (t <= 1.0e-10) {
		w = identity.w;
		x = identity.x;
		y = identity.y;
		z = identity.z;
		return *this;
	}
	double half = angle * 0.5;
	w = cos(half);
	double s = sin(half);
	const double tol = 1.0e-10;
	int d;
	if (t > 1.0)
		d = t - 1.0 <= tol;
	else
		d = 1.0 - t <= tol;
	if (!d)
		s = s / sqrt(t);
	x = s * axis.x;
	y = s * axis.y;
	z = s * axis.z;
	return *this;
}

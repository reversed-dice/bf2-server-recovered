// FUNCTION: BF2 0x6d5170
#include <math.h>
namespace maya {

class AwVector
{
public:
	double x;
	double y;
	double z;
	AwVector& normalize();
	double angle(AwVector const& v) const;
};

}

maya::AwVector& maya::AwVector::normalize()
{
	double t = x * x;
	t += y * y;
	t += z * z;
	if (t > 1.0e-20) {
		int d;
		if (t > 1.0)
			d = t - 1.0 <= 1.0e-10;
		else
			d = 1.0 - t <= 1.0e-10;
		if (!d) {
			double inv = 1.0 / sqrt(t);
			x = x * inv;
			y = y * inv;
			z = z * inv;
		}
	}
	return *this;
}

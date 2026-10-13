// FUNCTION: BF2 0x6d5360
// BF2_FLAGS: -fno-strict-aliasing
extern "C" double acos(double);

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

double AwVector::angle(AwVector const& v) const
{
	AwVector t = v;
	double z, y, x;
	AwVector& a = t.normalize();
	x = a.x;
	y = a.y;
	z = a.z;
	t = *this;
	AwVector& b = t.normalize();
	double d = x * b.x + y * b.y + z * b.z;
	if (d >= 1.0)
		return 0.0;
	if (d <= -1.0)
		return 3.141592653589793;
	return acos(d);
}

}

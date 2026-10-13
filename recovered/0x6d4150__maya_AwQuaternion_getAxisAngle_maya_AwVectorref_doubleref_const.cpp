// FUNCTION: BF2 0x6d4150
extern "C" double acos(double);
extern "C" double sin(double);
extern "C" double sqrt(double);

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
	int getAxisAngle(AwVector& axis, double& angle) const;
};

int AwQuaternion::getAxisAngle(AwVector& axis, double& angle) const
{
	double w = this->w;
	int degen;
	if (w > 1.0)
		degen = w - 1.0 <= 1e-10;
	else
		degen = 1.0 - w <= 1e-10;
	if (degen) {
		angle = 0.0;
		double len = sqrt(axis.x * axis.x + axis.y * axis.y + axis.z * axis.z);
		if (len < 1e-10) {
			axis.x = 0.0;
			axis.y = 0.0;
			axis.z = 1.0;
		}
		return 0;
	}
	if (w < -1.0)
		w = -1.0;
	else
		w = w > 1.0 ? 1.0 : w;
	double a = acos(w);
	angle = a + a;
	double s = sin(a);
	double scale = 1.0 / s;
	axis.x = scale * x;
	axis.y = scale * y;
	axis.z = scale * z;
	return 1;
}

}

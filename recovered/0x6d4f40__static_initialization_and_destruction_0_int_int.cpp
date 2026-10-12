// FUNCTION: BF2 0x6d4f40
#include <iostream>

namespace maya {

class AwVector
{
public:
	AwVector(double a, double b, double c) : x(a), y(b), z(c) {}
	~AwVector();
	double x, y, z;
};

AwVector zero(0.0, 0.0, 0.0);
AwVector xAxis(1.0, 0.0, 0.0);
AwVector yAxis(0.0, 1.0, 0.0);
AwVector zAxis(0.0, 0.0, 1.0);

}

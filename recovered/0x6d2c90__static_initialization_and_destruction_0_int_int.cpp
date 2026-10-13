// FUNCTION: BF2 0x6d2c90
#include <iostream>

namespace maya {

class AwMatrix
{
public:
	AwMatrix()
	{
		m[14] = 0; m[13] = 0; m[12] = 0; m[11] = 0;
		m[9] = 0; m[8] = 0; m[7] = 0; m[6] = 0;
		m[4] = 0; m[3] = 0; m[2] = 0; m[1] = 0;
		m[15] = 1.0; m[10] = 1.0; m[5] = 1.0; m[0] = 1.0;
	}
	~AwMatrix();
	double m[16];
};

AwMatrix identity;

}

// FUNCTION: BF2 0x6d2630
class AwMatrix
{
public:
	double m[4][4];
	AwMatrix& transposeIt();
};
AwMatrix& AwMatrix::transposeIt()
{
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = i + 1; j < 4; j++)
		{
			double tmp = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = tmp;
		}
	return *this;
}

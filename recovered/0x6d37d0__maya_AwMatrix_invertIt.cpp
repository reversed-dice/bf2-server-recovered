// FUNCTION: BF2 0x6d37d0
namespace maya {

class AwMatrix
{
public:
	AwMatrix()
	{
		m[3][2] = 0; m[3][1] = 0; m[3][0] = 0; m[2][3] = 0;
		m[2][1] = 0; m[2][0] = 0; m[1][3] = 0; m[1][2] = 0;
		m[1][0] = 0; m[0][3] = 0; m[0][2] = 0; m[0][1] = 0;
		m[3][3] = 1.0; m[2][2] = 1.0; m[1][1] = 1.0; m[0][0] = 1.0;
	}
	AwMatrix& invertIt();
	double m[4][4];
};

#define AW_EPS 1.0e-15

AwMatrix& AwMatrix::invertIt()
{
    AwMatrix inv;
    int i, j, k;

    for (i = 0; i < 3; i++) {
        int pivot = i;
        for (j = i; j < 4; j++)
            if (m[pivot][i] * m[pivot][i] < m[j][i] * m[j][i])
                pivot = j;
        if (pivot != i) {
            for (k = 0; k < 4; k++) {
                double t = m[pivot][k];
                m[pivot][k] = m[i][k];
                m[i][k] = t;
                t = inv.m[pivot][k];
                inv.m[pivot][k] = inv.m[i][k];
                inv.m[i][k] = t;
            }
        }
        if (m[i][i] > AW_EPS || m[i][i] < -AW_EPS) {
            for (j = i + 1; j < 4; j++) {
                double f = m[j][i];
                double d = m[i][i];
                for (k = 0; k < 4; k++) {
                    m[j][k] -= f / d * m[i][k];
                    inv.m[j][k] -= f / d * inv.m[i][k];
                }
                m[j][i] = 0.0;
            }
        }
    }

    for (i = 0; i < 4; i++) {
        double d = m[i][i];
        if (d > AW_EPS || d < -AW_EPS) {
            for (k = 0; k < 4; k++) {
                m[i][k] /= d;
                inv.m[i][k] /= d;
            }
            m[i][i] = 1.0;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            double f = m[i][j];
            for (k = 0; k < 4; k++) {
                m[i][k] -= f * m[j][k];
                inv.m[i][k] -= f * inv.m[j][k];
            }
            m[i][j] = 0.0;
        }
    }

    m[0][0] = inv.m[0][0];
    m[0][1] = inv.m[0][1];
    m[0][2] = inv.m[0][2];
    m[0][3] = inv.m[0][3];
    m[1][0] = inv.m[1][0];
    m[1][1] = inv.m[1][1];
    m[1][2] = inv.m[1][2];
    m[1][3] = inv.m[1][3];
    m[2][0] = inv.m[2][0];
    m[2][1] = inv.m[2][1];
    m[2][2] = inv.m[2][2];
    m[2][3] = inv.m[2][3];
    m[3][0] = inv.m[3][0];
    m[3][1] = inv.m[3][1];
    m[3][2] = inv.m[3][2];
    m[3][3] = inv.m[3][3];
    return *this;
}

}

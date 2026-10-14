// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x6d2ed0
namespace maya
{

struct AwMatrix
{
	double m_elements[16];
	bool isOrthogonal() const;
};

bool AwMatrix::isOrthogonal() const
{
	double t0 = m_elements[0] * m_elements[0] + m_elements[1] * m_elements[1] + m_elements[2] * m_elements[2];

	double t1 = m_elements[4] * m_elements[4] + m_elements[5] * m_elements[5] + m_elements[6] * m_elements[6];

	int d;
	if (t1 > t0)
		d = t1 - t0 <= 1.0e-10;
	else
		d = t0 - t1 <= 1.0e-10;
	if (!d) return false;

	double t2 = m_elements[8] * m_elements[8] + m_elements[9] * m_elements[9] + m_elements[10] * m_elements[10];

	if (t2 > t0)
		d = t2 - t0 <= 1.0e-10;
	else
		d = t0 - t2 <= 1.0e-10;
	if (!d) return false;

	double c = m_elements[0] * m_elements[4];
	c += m_elements[1] * m_elements[5];
	c += m_elements[2] * m_elements[6];

	if (c > 0.0)
		d = c - 0.0 <= 1.0e-10;
	else
		d = 0.0 - c <= 1.0e-10;
	if (!d) return false;

	c = m_elements[4] * m_elements[8];
	c += m_elements[5] * m_elements[9];
	c += m_elements[6] * m_elements[10];

	if (c > 0.0)
		d = c - 0.0 <= 1.0e-10;
	else
		d = 0.0 - c <= 1.0e-10;
	if (!d) return false;

	c = m_elements[0] * m_elements[8];
	c += m_elements[1] * m_elements[9];
	c += m_elements[2] * m_elements[10];

	if (c > 0.0)
		d = c - 0.0 <= 1.0e-10;
	else
		d = 0.0 - c <= 1.0e-10;
	if (d) return true;
	return false;
}

}

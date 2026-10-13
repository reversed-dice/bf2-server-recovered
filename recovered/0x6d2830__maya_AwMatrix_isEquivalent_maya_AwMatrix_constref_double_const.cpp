// BF2_FLAGS: -fno-tree-dominator-opts
// FUNCTION: BF2 0x6d2830
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

namespace maya
{

struct AwMatrix
{
	double m_elements[16];
	bool isEquivalent(AwMatrix const& m, double tolerance) const;
};

bool AwMatrix::isEquivalent(AwMatrix const& m, double tolerance) const
{
	if (!(tolerance >= 0.0))
	{
		__assert_fail("tolerance >= 0.0", "Animation/BoneAnimation/Ik2bSolver/AwMatrix.cpp", 327, __PRETTY_FUNCTION__);
	}

	if (!(__builtin_fabs(m_elements[0] - m.m_elements[0]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[1] - m.m_elements[1]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[2] - m.m_elements[2]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[3] - m.m_elements[3]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[4] - m.m_elements[4]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[5] - m.m_elements[5]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[6] - m.m_elements[6]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[7] - m.m_elements[7]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[8] - m.m_elements[8]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[9] - m.m_elements[9]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[10] - m.m_elements[10]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[11] - m.m_elements[11]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[12] - m.m_elements[12]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[13] - m.m_elements[13]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[14] - m.m_elements[14]) <= tolerance)) return false;
	if (!(__builtin_fabs(m_elements[15] - m.m_elements[15]) <= tolerance)) return false;

	return true;
}

}

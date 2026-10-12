// FUNCTION: BF2 0x73b3f0
#include <iostream>
#include <vector>

namespace dice { namespace hfe {

class DebugCounterManager
{
public:
	static std::vector<int> m_counterVec;
	static std::vector<int> m_text;
};

std::vector<int> DebugCounterManager::m_counterVec;
std::vector<int> DebugCounterManager::m_text;

} }

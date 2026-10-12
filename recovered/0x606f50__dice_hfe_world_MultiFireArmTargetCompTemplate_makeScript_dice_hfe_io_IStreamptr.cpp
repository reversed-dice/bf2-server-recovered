// FUNCTION: BF2 0x606f50
#include <ostream>
#include <sstream>
#include <string>

typedef unsigned int (*Wfn)(void*, const char*, unsigned int);
bool baseMakeScript_606f50(void* self, void* stream);

struct TMulti {
    char pad0[0x5c];
    float m_0x5c;
    float m_0x60;
    char pad1[0x4];
    float m_0x68;
    bool makeScript(void* stream);
};

bool TMulti::makeScript(void* stream)
{
    std::ostringstream ss(std::ios_base::out);
    if (!baseMakeScript_606f50(this, stream)) return false;
    if (m_0x60 != 0.0f) {
        ss << "ObjectTemplate.target.lockDelay " << (double)m_0x60 << std::endl;
    }
    if (m_0x68 != 0.20000000298023224f) {
        ss << "ObjectTemplate.target.loseLockDelay " << (double)m_0x68 << std::endl;
    }
    if (m_0x5c != 0.0f) {
        ss << "ObjectTemplate.target.lockAngle " << (double)m_0x5c << std::endl;
    }
    std::string str = ss.str();
    Wfn f = *(Wfn*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

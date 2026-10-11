// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fno-strict-aliasing
// FUNCTION: BF2 0x63aca0
#include <sstream>
#include <string>
#include <ostream>

namespace dice { namespace hfe { namespace io {
class IStream { };
} } }

namespace dice { namespace hfe { namespace world {

bool baseMakeScript_575fa0(void* self, dice::hfe::io::IStream* stream);

typedef unsigned int (*wfn_t)(void*, const char*, unsigned int);

class RotorTemplate {
public:
    char _pad0[0x1f4];
    float m_changeLodAt;      // +0x1f4
    float m_tolerance;        // +0x1f8
    std::string m_engineName; // +0x200
    float m_rotationSpeedMod;    // +0x208
    float m_rotationSpeedModBlur; // +0x20c
    int m_rotationAxle;          // +0x210

    bool makeScript(dice::hfe::io::IStream* stream);
};

bool RotorTemplate::makeScript(dice::hfe::io::IStream* stream) {
    std::ostringstream ss(std::ios_base::out);
    if (!baseMakeScript_575fa0(this, stream))
        return false;
    ss << "ObjectTemplate.changeLodAt " << (double)m_changeLodAt << std::endl;
    ss << "ObjectTemplate.tolerance " << (double)m_tolerance << std::endl;
    ss << "ObjectTemplate.rotationSpeedMod " << (double)m_rotationSpeedMod << std::endl;
    ss << "ObjectTemplate.rotationSpeedModBlur " << (double)m_rotationSpeedModBlur << std::endl;
    ss << "ObjectTemplate.rotationAxle " << (int)m_rotationAxle << std::endl;
    ss << "ObjectTemplate.engineName " << m_engineName << std::endl;
    std::string str = ss.str();
    wfn_t f = *(wfn_t*)(*(char**)stream + 0x28);
    unsigned int n = f(stream, str.data(), (unsigned int)str.size());
    return n == str.size();
}

} } }

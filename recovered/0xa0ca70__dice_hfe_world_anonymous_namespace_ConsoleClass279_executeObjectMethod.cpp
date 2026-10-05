// FUNCTION: BF2 0xa0ca70
#include <string>
namespace dice { namespace hfe { namespace world {
class ParticleSystemTemplateBase {
public:
    std::string getQualityLevel() const;
    void setQualityLevel(const std::string& v);
};
}}}

namespace dice { namespace hfe { namespace world {
namespace {

::dice::hfe::world::ParticleSystemTemplateBase* getParticleSystemTemplateBase();

class ConsoleClass279 {
public:
    virtual ~ConsoleClass279();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
    unsigned char _pad3[0x110 - 0x109];
    std::string m_result;
};

void* ConsoleClass279::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = getParticleSystemTemplateBase()->getQualityLevel();
        return &m_result;
    }
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = false;
        getParticleSystemTemplateBase()->setQualityLevel(a);
    }
    return 0;
}

}
} } }

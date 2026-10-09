// FUNCTION: BF2 0x7347b0
#include <map>

namespace dice { namespace hfe {

class ClassManager {
public:
    virtual ~ClassManager();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual void v38();
    virtual void setDefaultClass(unsigned int classId, unsigned int defaultId); // slot 8 (+0x40)

    char _pad[0x40 - 0x8];
    std::map<unsigned int, unsigned int> m_defaultClasses; // +0x40
};

void ClassManager::setDefaultClass(unsigned int classId, unsigned int defaultId)
{
    m_defaultClasses[classId] = defaultId;
}

} }

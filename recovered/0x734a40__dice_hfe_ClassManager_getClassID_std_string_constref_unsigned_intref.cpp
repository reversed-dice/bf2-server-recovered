// FUNCTION: BF2 0x734a40
#include <string>

namespace dice { namespace hfe {

class ClassManager {
public:
    class ClassInfo {
    public:
        void*        m_p0;
        unsigned int m_classId;
        unsigned int m_pad;
        std::string  m_name;
        void*        m_extra0;
        void*        m_extra1;
    };

    bool getClassInfo(std::string const& name, ClassInfo& info);
    bool getClassID(std::string const& name, unsigned int& id);
};

bool ClassManager::getClassID(std::string const& name, unsigned int& id) {
    ClassInfo info;
    if (getClassInfo(name, info)) {
        id = info.m_classId;
        return true;
    }
    return false;
}

}}

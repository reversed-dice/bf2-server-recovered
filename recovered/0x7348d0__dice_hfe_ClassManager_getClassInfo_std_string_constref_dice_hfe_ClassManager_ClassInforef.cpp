// FUNCTION: BF2 0x7348d0
#include <string>
#include <vector>

namespace dice { namespace hfe {

bool equalsIgnoreCase(std::string const& a, std::string const& b);

class ClassManager {
public:
    struct ClassInfo {
        void* createFn;        // +0x0
        unsigned int classId;  // +0x8
        std::string className; // +0x10
        void* parent;          // +0x18
    };

    bool getClassInfo(std::string const& className, ClassInfo& out);

    char _pad[0x70];
    std::vector<ClassInfo> m_classes; // +0x70
};

bool ClassManager::getClassInfo(std::string const& className, ClassInfo& out)
{
    std::vector<ClassInfo>::const_iterator it = m_classes.begin();
    for (; it != m_classes.end(); ++it) {
        if (equalsIgnoreCase(it->className, className)) {
            out = *it;
            return true;
        }
    }
    return false;
}

} }

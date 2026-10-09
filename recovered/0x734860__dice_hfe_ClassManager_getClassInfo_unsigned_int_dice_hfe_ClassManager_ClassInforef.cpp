// FUNCTION: BF2 0x734860
#include <string>
#include <vector>

namespace dice { namespace hfe {

class ClassManager {
public:
    struct ClassInfo {
        void* createFn;        // +0x0
        unsigned int classId;  // +0x8
        std::string className; // +0x10 (wait, offset +0x10 means classId is 64-bit aligned or struct has 8-byte pointer after int?)
        void* parent;          // +0x18
    };

    bool getClassInfo(unsigned int classId, ClassInfo& out);

    char _pad[0x70];
    std::vector<ClassInfo> m_classes; // +0x70
};

bool ClassManager::getClassInfo(unsigned int classId, ClassInfo& out)
{
    std::vector<ClassInfo>::const_iterator it = m_classes.begin();
    for (; it != m_classes.end(); ++it) {
        if (it->classId == classId) {
            out = *it;
            return true;
        }
    }
    return false;
}

} }

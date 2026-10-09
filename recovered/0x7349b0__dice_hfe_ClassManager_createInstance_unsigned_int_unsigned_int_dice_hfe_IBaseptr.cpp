// FUNCTION: BF2 0x7349b0
#include <string>

namespace dice { namespace hfe {

class IBase;

class ClassManager {
public:
    struct ClassInfo {
        typedef void* (*CreateFn)(unsigned int, IBase*);
        CreateFn createFn;     // +0x0
        unsigned int classId;  // +0x8
        std::string className; // +0x10
        void* parent;          // +0x18
    };

    bool getClassInfo(unsigned int classId, ClassInfo& out);
    void* createInstance(unsigned int classId, unsigned int defaultId, IBase* parent);
};

void* ClassManager::createInstance(unsigned int classId, unsigned int defaultId, IBase* parent)
{
    ClassInfo info;
    if (getClassInfo(classId, info)) {
        return info.createFn(defaultId, parent);
    }
    return 0;
}

} }

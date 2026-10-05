// FUNCTION: BF2 0x9437a0
#include <string>
namespace dice { namespace hfe { namespace world {

class TriggerableTemplate {
public:
    void addTriggerableTarget(std::string name);
};

TriggerableTemplate* getActiveTemplate(unsigned int classId);
extern unsigned int classId0x9437a0;

namespace {

class ConsoleClass1213 {
public:
    virtual ~ConsoleClass1213();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const std::string* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
};

void* ConsoleClass1213::executeObjectMethod()
{
    if (m_argc == 1) {
        std::string a(*m_arg0);
        m_hasResult = false;
        getActiveTemplate(classId0x9437a0)->addTriggerableTarget(a);
    }
    return 0;
}

}
} } }
